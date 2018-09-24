#include <stdio.h>

//Somme des termes impairs de la suite de Fibonacci

#define MAX 20

int main(){
    int i;
    int tab[MAX];
    tab[0]=0;
    tab[1]=1;
    for(i=2;i<MAX;i++){
        tab[i]=tab[i-2]+tab[i-1];
        printf("%d ",tab[i]);
    }
    printf("\n");
}
