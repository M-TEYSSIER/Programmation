#include <stdio.h>
// Exo: [(4+3i)*(5-2i)-(2-i)*(-5+3i)]/[(1+i)*(2-4i)+(3+2i)*(5-i)]
                                                            


typedef struct cplx_t{
    float r;
    float i;
}cplx;

cplx fabrique_cplx(int re,int im) {
    cplx nom;
    nom.r=re;
    nom.i=im;
    return nom;
}

void affiche_cplx(cplx compl){
    printf("complexe=%f+%fi\n",compl.r,compl.i);
}

cplx add_cplx(cplx a,cplx b){
    a.r=a.r+b.r;
    a.i=a.i+b.i;
    //printf("complexe=(%d)+(%di)\n",a.r,a.i);
    return a;
}

cplx mul_cplx(cplx a,cplx b){
    a.r=a.r*b.r;
    a.i=a.i*b.i;
    //printf("complexe=(%d) + (%di)\n",a.r,a.i);
    return a;
}

cplx div_cplx(cplx a,cplx b){
    a.r=a.r/b.r;
    a.i=a.i/b.i;
    return a;
}

cplx soustr_cplx(cplx a, cplx b){
    a.r=a.r-b.r;
    a.i=a.i-b.i;
    return a;
}

int main(){
    cplx complexe1;
    complexe1=fabrique_cplx(4,3);
    cplx complexe2; 
    complexe2=fabrique_cplx(5,-2);
    cplx complexe3; 
    complexe3=fabrique_cplx(2,-1);
    cplx complexe4; 
    complexe4=fabrique_cplx(-5,3);
    cplx complexe5;
    complexe5=fabrique_cplx(1,1);
    cplx complexe6;
    complexe6=fabrique_cplx(2,-4);
    cplx complexe7;
    complexe7=fabrique_cplx(3,2);
    cplx complexe8;
    complexe8=fabrique_cplx(5,-1);
    cplx complexe0;



    complexe0=(div_cplx((soustr_cplx(mul_cplx(complexe1,complexe2),mul_cplx(complexe3,complexe4))),(add_cplx(mul_cplx(complexe5,complexe6),mul_cplx(complexe7,complexe8)))));



    printf("La valeur final est de: (%f) + (%fi) \n",complexe0.r,complexe0.i);

}





