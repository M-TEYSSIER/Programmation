#include <stdio.h>

int main(){
    int x,y,z;
    printf("Donnez un nombre entier: ");
    scanf("%d",&x);

    printf("Donnez un nombre entier: ");
    scanf("%d",&y);

    printf("Donnez un nombre entier: ");
    scanf("%d",&z);

    if(x<y && x <z ){
       if(y<z){
        printf("%d - %d - %d\n",x,y,z);
       }
       else{
        printf("%d - %d - %d\n",x,z,y);
       }    
    }
    if(y<x && y<z){
        if(x<z){
        printf("%d - %d - %d\n",y,x,z);
        }
        else{
        printf("%d - %d - %d\n",y,z,x);
        }
    }
    if(z<x && z<y){
        if(x<y){
        printf("%d - %d - %d\n",z,x,y);
        }
        else{
        printf("%d - %d - %d\n",z,y,x);
        }
    }

}
