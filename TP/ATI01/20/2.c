#include <stdio.h>

int main(){

    int u,n,un,deux;
    u=3773;

    for(n=0;n<194;n++){
        un=u/100;            
        deux=u%100;
        u=(((un+deux)*195)+117)%9973;
        printf("U: %d \n",u);
    }
    

}
