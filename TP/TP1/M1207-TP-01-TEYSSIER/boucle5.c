#include <stdio.h>

int main(){
    char tab[5];
    int i,y;
  
    for(i=0;i<6;i++){
        for(y=0;y<i;y++){
            printf("%d",tab[y]);
        }
    tab[i]=i;
    printf("\n");
    }
}
