#include <stdio.h>

int serie(int R1,int R2){
    int R3;
    R3=(R1+R2);
    return R3;
}
int parallele(int R1,int R2){
    int R3;
    R3=((R1*R2)/(R1+R2));
return R3;
}

int main(){
    int R1,R2,R3,R4,R5,R6,R7;
    int R0;

    int serie();
    int parallele();
   
    R1=R2=R3=R4=R5=R6=R7=100;
    
    R0=parallele(serie((parallele(R1,serie(R2,R3))),(serie(R4,parallele(R5,R6)))),R7);

    printf("Res = %d\n",R0);
}
