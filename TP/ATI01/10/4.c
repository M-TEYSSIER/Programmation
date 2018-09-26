#include <stdio.h>

int main(){

    int Nserie,U,N,i;
    
    Nserie=449149;
    N=Nserie%1000;
    U=((Nserie-N)/1000);
    
        for(i=0;i<N;i++){
            U=U*13;
            U=U%1000;    
        }
    Nserie=U;
    printf("%d U: %d \n",i,U);
    
    printf("\n");
}
