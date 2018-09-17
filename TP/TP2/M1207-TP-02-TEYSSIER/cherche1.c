#include <stdio.h>

int main(){
    int n,x;
    n=50;

    while(x!=n){
    printf("Choisissez un entier entre 0 et 100: ");
    scanf("%d",&x);
    if(x<n){printf("More ! Try again\n");}
    if(x>n){printf("Less ! Try again\n");}
    if(x==n){printf("Good game bro !\n");}
    }

}
