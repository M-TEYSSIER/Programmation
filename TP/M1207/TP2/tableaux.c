#include <stdio.h>
#include <string.h>
void afficheTableauEntier(int *tab,int len){
    int i;
    for(i=0;i<len;i++){
        printf("Tab = %d \n",tab[i]);
    }
   printf("\n"); 
}

int chercheMaximum(int *tab,int len){
    int i,c;
    c=0;
    for(i=0;i<len;i++){
        if(c<tab[i]){c=tab[i];}
    }
    printf("Maximum: %d\n\n",c);
    return c;
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
    printf("Pos Min: %d\n\n",d);
    return d;
}

void permuteTableauEntier(int *tab,int len,int i1,int i2){
    int a,i;
    a=tab[i1];
    tab[i1]=tab[i2];
    tab[i2]=a;
    printf("Apres permut du %d avec le %d: ",i1,i2);
    for(i=0;i<len;i++){
    printf("%d  ",tab[i]);}
    printf("\n\n");
}

int longueur(char * str){
    int l;
    l=strlen(str);
    printf("Taille : %d\n\n",l);
    return l;
}

void recopie(char *src,char *dst){
    strcpy(src,dst);
    printf("source: %s - dest: %s \n\n",src,dst);
}

void recopieALenvers(char *src,char *dst){
    printf("L ecriture inverse de %s  :-->  ",src);
    int i;
    for(i=strlen(src); i>=0;i--){
        printf("%c",src[i]);
    }
    printf("\n\n");
}

void concatene(char *srcA,char *srcB,char *dst){
    dst=strcat(srcA, srcB);
    printf("La concatenation donne : %s\n",dst);
}

int main(){
    char x[]="Max",c[]="Ime",a[]="TEYSSIER",y[]="Max";
    char str1[]="oki";
    int tab[10]={5,2,9,3,4,6,7,0,1,8};

    void afficheTableauEntier(int *tab,int len);
    afficheTableauEntier(tab, 10);

    int chercheMaximum(int *tab,int len);
    chercheMaximum(tab,10);

    int cherchePositionMinimum(int *tab,int len);
    cherchePositionMinimum(tab,10);

    void permuteTableauEntier(int *tab,int len,int i1,int i2);
    permuteTableauEntier(tab, 10, 1, 2);

    int longueur(char * str);
    longueur(str1);

    void recopie(char *src,char *dst);
    recopie(x,c);

    void recopieALenvers(char *src,char *dst);
    recopieALenvers(c,x);

    void concatene(char *src1,char *src2,char *dst);
    concatene(y, c, a);
}
