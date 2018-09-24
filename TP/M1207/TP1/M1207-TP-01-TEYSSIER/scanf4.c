#include <stdio.h>

int main(){
    char x[20];
    printf("Entrer une chaine de caracteres:");
    scanf("%s",x); // ne prendra que la 1ere chaine de caracteres, stop a l'espace.
    printf("Valeur : %s \n",x);
}
