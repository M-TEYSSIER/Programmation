#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int pgcd(int a,int b){
	if (b==0){
        return a;}
    else {
        printf("PGCD de %d est %d    le reste est de %d\n",a,b,(b%a));
        return pgcd(b,(a%b));}
}

int main(){
    	int i,x,f;
 	    int pgcd(int a, int b);
    	x=2;
    	int tab[MAX-1];
    	for(i=0;i<MAX;i++){
    	   tab[i]=x;
    	   x++;   
    	}	

    for(i=0;i<MAX;i++){
        for(x=2;x<i+1;x++){
            if(tab[i]%x==0){
               tab[i]=0;        
            } 
            else {  
                if(x+1==0){
                    x++;
                }
            }    
        }

        if(tab[i]!=0){
        f=pgcd(MAX,(rand()%100+0));
        //printf("%d\n",f);
        }
    }
    printf("\n");
    return 0;
}
