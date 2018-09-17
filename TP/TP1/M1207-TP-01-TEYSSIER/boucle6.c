#include <stdio.h>

int main(){

    char x;

    printf(" ****** Menu ****** \n a : Fixer la valeur de a \n b : Afficher la valeur de a\n q : Quitter le programme\n ********************\n Option choisie ?");

    x = getchar();
   switch(x){
       case 1 :x="q";break;
   }
}
