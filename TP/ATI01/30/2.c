#include <stdio.h>


int main(){
int altitude, monte,descend,jour,tabparcours[200];
    jour=altitude=0;
    monte=1370;
    descend=280;
    

     while(altitude+monte<32400){
       
        altitude=altitude+monte;
        monte--;
        jour++;
        altitude=altitude-descend;
        tabparcours[jour]=altitude;
            
        if( (jour==7) || (jour==15) || (jour==23) || (jour==31) || (jour==39) || (jour==47) ){
                   altitude= tabparcours[jour-2];
                    tabparcours[jour]=altitude;

        }
        printf("Jour: %d - Alt: %d - TabPar:%d\n",jour,altitude,tabparcours[jour]);
    }

    printf("NB jour: %d \n",jour);

}
