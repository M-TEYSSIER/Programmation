#include <stdio.h>

float convert(float a){
    float b ;
    b=((a-32)/(9.0/5.0));
    return b;
}

int main(){
    float F,x;
    float convert(float F);
    
    printf("Inserez le nombre de °F: ");
    scanf("%f",&F);
    x=convert(F);
    printf("Le resultat est de %f °C\n",x);

    return 0;
}
