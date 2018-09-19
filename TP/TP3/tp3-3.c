#include <stdio.h>

typedef struct cplx_t{
    int r;
    int i;
}cplx;

cplx fabrique_cplx(int re,int im) {
    cplx nom;
    nom.r=re;
    nom.i=im;
    return nom;
}

void affiche_cplx(cplx compl){
    printf("complexe=%d+%di\n",compl.r,compl.i);
}

void add_cplx(cplx a,cplx b){
    a.r=a.r+b.r;
    a.i=a.i+b.i;
    printf("complexe=%d+%di\n",a.r,a.i);
}

void mul_cplx(cplx a,cplx b){
    a.r=a.r*b.r;
    a.i=a.i*b.i;
    printf("complexe=%d+%di\n",a.r,a.i);
}


int main(){
    cplx complexe;
    complexe=fabrique_cplx(1,2);
    affiche_cplx(complexe);
    cplx complexe2;
    complexe2=fabrique_cplx(3,4);
    add_cplx(complexe,complexe2);
    mul_cplx(complexe,complexe2);
}
