#include <stdio.h>


//initialiser a, b, c, k et n respectivement à 1, 2, 5, 1 et 0
//répéter tant que k est strictement inférieur à 1000-n
//    a ← b
//        b ← c + a
//            c ← 3*c + 4*a - b
//                n ← a + b
//                    augmenter k de 1
//                    fin répéter
//
//                    Quelles sont les valeurs de a, b et c à la fin du calcul ?

int main(){

    int a,b,c,k,n;
    a=k=1,b=2,c=5,n=0;

    while(k<(1000-n)){
    
        a=b;
        b=c+a;
        c=(3*c)+(4*a)-b;
        n=a+b;
        k++;    
    }
    printf("a:%d -  b:%d - c:%d\n",a,b,c);

}
