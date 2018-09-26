#include <stdio.h>

int main(){
    int i;

    for(i=0;i<1000;i++){
       if(i<1000){
            if(((i%10)+((i%100)/10)+(i/100))==11){
                if(i%7==0){
                    printf("%d ",i);
                }
            }
       }
    }
    printf("\n");
    return 0;
}
