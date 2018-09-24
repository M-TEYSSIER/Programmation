#include <stdio.h>

int main(){
    int n;
    long tab[90];
    
    
    tab[0]=2,tab[1]=3;

    for(n=2;n<91;n++){
        if(n%2==0){
            tab[n]=(2*tab[n-1])+tab[n-2];    
        }
        if(n%2!=0){
            tab[n]=tab[n-1]-tab[n-2];
        }
        printf("%d  %ld \n",n,tab[n]);
    }
    return 0;
}
