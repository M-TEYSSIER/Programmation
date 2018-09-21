#include <stdio.h>

int main(){
    int i,n;

    for(i=0;i<12;i=i+2){
        for(n=0;n<i+1;n++){
            printf("*");
        }
        printf("\n");
    }
}
