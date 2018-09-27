#include <stdio.h>

int main(){
    
    int n,j,Player1,Player2,i,tour;
    Player1=Player2=100;
    j=i=tour=0;
    n=8207;


    while(n>0 && Player1>0 && Player2>0 ){
        j=(n%10)+((n%100)/10)+((n%1000)/100)+(n/1000);


        n=n-j;

        if(i==0){
        Player1=Player1-j;
        i++;
        printf("P1:%d ",Player1);
        }
        else if(i==1){
        Player2=Player2-j;
        i--;
        printf("P2:%d ",Player2);
        }
        j=0;    
        tour++;
        printf("%d\n",n);

        if(Player1==0 || Player2==0){
            break;
        }
    }
    
    printf("NB tours:%d\n",tour);
}
