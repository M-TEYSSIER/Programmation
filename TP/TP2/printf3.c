#include <stdio.h>

int main(){
    int tab[6]={5,9,7,3,14,8};
    int i,n;

    for(i=0;i<6;i++){
        for(n=0;n<tab[i];n++){
        printf("*");
        }
        printf("\n");
    }
}
