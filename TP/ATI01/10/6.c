#include <stdio.h>

#define MAX 1325

int main(){
    int somme,i;
    somme=0;

    for(i=0;i<MAX;i++){
        if((i%5)==0 || i%3==0){
            printf("%d ",i);
            somme=somme+i;
            printf("somme: %d\n",somme);
        }    
    }
}
