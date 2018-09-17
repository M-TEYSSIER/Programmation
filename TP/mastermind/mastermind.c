#include <stdio.h>

int main(){
    
    int reponse[4],code[4]={1,2,3,4}, BP,MP,i,x,NbCoup;


    printf("Bienvenue dans le mastermind \n\n\n");
    printf("Le code est -> %d:%d:%d:%d\n\n\n",code[0],code[1],code[2],code[3]);

    //printf("BP: %d          MP: %d\n\n",BP,MP);

    while(reponse!=code){
         BP=MP=NbCoup=0;

        NbCoup++;
        printf("Choisissez un chiffre en 0 et 9:");
        scanf("%d",&reponse[0]);

        printf("Choisissez un deuxieme chiffre en 0 et 9:");
        scanf("%d",&reponse[1]);
       
        printf("Choisissez un troisieme chiffre en 0 et 9:");
        scanf("%d",&reponse[2]);

        printf("Choisissez un quatrieme chiffre en 0 et 9:");
        scanf("%d",&reponse[3]);

        printf("Vous avez choisi -> %d:%d:%d:%d\n\n",reponse[0],reponse[1],reponse[2],reponse[3]);
   
        
        for(i=0;i<4;i++){
            for(x=0;x<4;x++){
               if(reponse[i]==code[x]){
                    if(x==i){BP++;}
                    else{MP++;}
               }
            }
       } 
       if(BP==4){printf("Bien joué !!!\n");break;}
       else{printf("---------------------------\nLe nombre de chiffre bien place est de %d\nle nombre de chiffre mal place est de %d\n-----Veuillez reessayer----\nNombre de coup a: %d\n\n",BP,MP,NbCoup);}
   } 
}
