#include <stdio.h>
// Impossible de vérif la reponse
int main(){

    int i,n,j;
    int M[6][6]={{36, 19, 27, 36, 7, 10},{2, 18, 3, 33, 2, 21},{26, 27, 4, 22, 30, 31},{29, 36, 7, 20, 6, 30},{30, 6, 14, 23, 15, 13},{22, 10, 10, 35, 15, 22}};

    for(j=0;j<23;j++){
        for(i=0;i<6;i++){
        
            for(n=0;n<6;n++){
                
                M[i][n]=(((M[i][n])+4)*23)%37;
                printf("%d ",M[i][n]);
            }
            printf("\n"); 
        }
        printf("---------------\n");
    }

}
