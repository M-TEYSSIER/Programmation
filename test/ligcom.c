#include <stdio.h>


int main(int argc, char * argv[]){
	
	int i;
	printf("Mon nom de programme: %s \n",argv[0]);
	if(argc>1){
		for(i=1; i<argc; i++){
			printf("argugment numéro: %d: %s \n ",i,argv[i]);
		}
	}
	else {
		printf("Aucun argument\n");
	}

}
