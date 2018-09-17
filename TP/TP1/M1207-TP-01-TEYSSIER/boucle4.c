#include <stdio.h>

int main(){
    int x,y;

    while(x<3){
        while(y<2){
        printf("%d  %d\n",x,y);         
        y++;
        }
     y=0;
     x++;
    }
}
