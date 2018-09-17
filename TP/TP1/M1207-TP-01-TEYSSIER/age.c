#include <stdio.h>

int main(){
    int x;
    
    printf("Quel est mon age ?");
    scanf("%d",&x);

    if(x==5){
        printf("Trouvé !\n");
    }
    else{
        printf("Raté ! \n");
    }
}
