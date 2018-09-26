#include <stdio.h>


int main(){

     int nbtetes,coup;
     nbtetes=8542;
     coup = 0 ;

    while ( nbtetes > 1 ) {
         nbtetes=nbtetes/2;
         coup++ ;
         printf("%d -> %d \n", coup, nbtetes ) ;
        if(((nbtetes%2)!=0)&&(nbtetes!=1)) {
            nbtetes=(nbtetes*3)+1;
        }
    }

/*     for(coup=0;nbtetes>1;coup++){
        printf("%d -%d \n",coup, nbtetes);
         nbtetes=nbtetes/2;
         if (nbtetes == 1)
             break ;
        if((nbtetes%2)!=0){
            nbtetes=(nbtetes*3)+1;
            //printf("%d \n",nbtetes);
        }
     }
     coup++;
     printf("%d \n",coup);
*/

    if ( nbtetes == 1 )
        coup++ ;

    printf("coups : %d\n", coup ) ;
     return 0;

}
