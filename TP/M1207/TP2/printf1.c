#include <stdio.h>

int main(){
    int i,n;

    for(i=0;i<4;i++){
        for(n=0;n<i+1;n++){
            printf("*");
        }
        printf("\n");
    }
}
