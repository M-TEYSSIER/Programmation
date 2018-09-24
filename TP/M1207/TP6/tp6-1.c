#include <stdio.h>

int main(){
   	 int MAX,i,x;
    
    	printf("Votre Maximum ? ");
    	scanf("%d",&MAX);
    	x=2;
    	int tab[MAX-1];
    	for(i=0;i<MAX;i++){
    	   tab[i]=x;
    	   x++;   
    	   printf("%d ",tab[i]); 
    	}	
	printf("\n\n");

    for(i=0;i<MAX;i++){
        for(x=2;x<i+1;x++){
            if(tab[i]%x==0){
               tab[i]=0;        
            } 
            else {  
                if(x+1==0){
                    x++;
                }
            }    
        }

        printf("%d ",tab[i]);
    }
    printf("\n");
}
