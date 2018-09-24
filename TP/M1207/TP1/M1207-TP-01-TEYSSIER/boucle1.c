#include <stdio.h>

int main(){

    int x=0;

    while(x<5){
        printf("%d  \n",x);
        x=x+1;
    }
    x=0;
    do{ 
        printf("%d  \n",x);
        x=x+1;
    }while(x<5);
    x=0;
    for(x=0;x<5;x=x+1){
        printf("%d\n",x);
    }
}
