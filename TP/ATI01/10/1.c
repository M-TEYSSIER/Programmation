#include <stdio.h>

//Somme des termes impairs de la suite de Fibonacci

#define MAX 33 

int main(){
    int i;
    int tab[MAX];
    long res,somme;

    tab[0]=0;
    tab[1]=1;
    somme=res=0;

    for(i=2;i<MAX;i++){
       tab[i]=tab[i-2]+tab[i-1];
       printf("%d\n",tab[i]);
      
       if(tab[i]%2!=0){
           if(tab[i]<4000000){
              somme=res+tab[i];
              printf("%ld \n",somme);
              res=somme;
           }
      }
    }
   res++;
   
    printf("\n res FINAL: %ld\n",res);
}
                                            
