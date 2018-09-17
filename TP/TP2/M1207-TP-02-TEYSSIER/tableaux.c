#include <stdio.h>

void afficheTableauEntier(int *tab,int len){
    int i;
    for(i=0;i<len+1;i++){
        printf("Tab = %d\n",tab[i]);
    }
}

int chercheMaximum(int *tab,int len){
    int i,c;
    c=0;
    for(i=0;i<len+1;i++){
        if(c<tab[i]){c=tab[i];}
    }
    printf("Min: %d\n",c);
}

int cherchePositionMinimum(int *tab,int len){
  int i,c,d;
  c=tab[0];
    for(i=0;i<len+1;i++){
        if(c>tab[i]){
            c=tab[i];
            d=i;
        }
    }
    printf("Pos Min: %d\n",d);
}

void permuteTableauEntier(int *tab,int len,int i1,int i2){
    int a,i;
    a=tab[i1];
    tab[i1]=tab[i2];
    tab[i2]=a;
    printf("Apres permut: ");
    for(i=0;i<len+1;i++){
    printf("%d",tab[i]);}
    printf("\n");
}

int longueur(char *str){
    int l;
    l=len(str);
    printf("%d\n",l);
}
void recopie(char *src,char *dst){
    *dst=*src;
    printf("source: %c - dest: %c \n",*src,*dst);
}

void recopieALenvers(char *src,char *dst){
    printf("%c",*src);
    
    int i;
    for(i=len(*src); i>=0;i--){
        printf("%c ",src[i]);
    }
printf("\n");
}

/*void concatene(char *src1,char *src2,char *dst){
    
}*/


int main(){
    int x,c,a;
    char str1="oki";
    int tab[10]={5,2,9,3,4,6,7,0,1,8};

    void afficheTableauEntier(int *tab,int len);
    afficheTableauEntier(tab, 10);

    int chercheMaximum(int *tab,int len);
    chercheMaxime(tab,10);
    int cherchePositionMinimum(int *tab,int len);
    cherchePositionMinimum(tab,10);

    void permuteTableauEntier(int *tab,int len,int i1,int i2);
    permuteTableauEntier(tab, 10, 1, 2);

    int longueur(char *str);
    longueur(str1);

    void recopie(char *src,char *dst);
    recopie(x,c);

    void recopieALenvers(char *src,char *dst);
    recopieALenvers(c,x);

 //   void concatene(char *src1,char *src2,char *dst);
 // concatene(x,c,a);

}
