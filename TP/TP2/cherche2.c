#include <stdio.h>
#include <stdio.h>

int main(){
    int x;
    int n=rand();

    printf("%d\n",n);
    while(x!=n){
    printf("Choisissez un entier entre 0 et 100: ");
    scanf("%d",&x);
    if(x<n){printf("More ! Try again\n");}
    if(x>n){printf("Less ! Try again\n");}
    if(x==n){printf("Good game bro !\n");}
    }

}
