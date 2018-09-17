#include <stdio.h>
#include "pile.h"

int main(){
	
	int i;
	i=0;
    char fichier[30]; 

    printf("Nom du fichier:");
    scanf("%s",fichier);
	unsigned char C;

	FILE *handle;

	handle=fopen( fichier ,"r");
	C=fgetc(handle);

	pile_t pile;
    pile.head = 0 ;

    while(!feof(handle)){
		printf("recherche %d - %c ",i,C);

		if(C=='{' ){
			push(&pile,C); 
			printf("--Ouverture--");
		}
		if((C=='}' ) && (!is_empty(pile)) &&(head(pile)=='{' ) ){		
			pop(&pile);
			printf("--Fermeture--" );
		}		
		if(C=='[' ){
		        push(&pile,C);
				printf("--Ouverture--" );
			}
		if((C==']' ) && (!is_empty(pile)) && (head(pile)=='[' ) ){		
				pop(&pile);
				printf("--Fermeture--" );
			}
		if(C=='(' ){
				push(&pile,C);
				printf("--Ouverture--" );
			}
		if((C==')' ) && (!is_empty(pile) )&& (head(pile)=='(' ) ){		
				pop(&pile);
				printf("--Fermeture--" );	
		}
		i++;
		C=fgetc(handle);
        printf("\n");
	}			

	fclose(handle);

	printf("\nFin de la lecture du fichier\n");

	printf("\nNB non cloturés= %d \n", pile.head);

    for(i=0;i<pile.head;i++){
        printf("Caractere %d: %c\n",i+1,pile.tab[i]);
    }

	return 0;
}
