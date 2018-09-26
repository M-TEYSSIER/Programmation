#include <stdio.h>

int main(){

    int i,somme;
    somme=0;
    
    for(i=140;i<1008;i++){
    
        if(((i/100)==4) || ((i/100)==7) || (((i/10)%10)==4) || (((i/10)%10)==7) || (i%10==4) || (i%10==7)){        
            somme=somme +i;
            printf("%d ",somme);
        }
    
    }
   
    printf("\nRésultat: %d \n",somme);
    return 0;

}
