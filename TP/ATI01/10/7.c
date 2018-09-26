#include <stdio.h>

#define etages 50

int main(){

    int n,somme;
    somme=0;
    for(n=0;n<etages;n++){
        if(((n*n)%3)==0){
        somme=somme+(n*n);
        }
    }
    printf("%d\n",somme);
    return 0;
}
