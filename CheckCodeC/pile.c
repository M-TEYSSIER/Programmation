#include <stdio.h>
#include "pile.h"

void push (pile_t* pile,char C){
    if (is_full(*pile)) {
        fprintf(stderr,"impossible de push()\n" ) ;
        return ;
    }
    pile->tab[pile->head]=C;
    pile->head++;
}


char pop (pile_t* pile){
    if (is_empty(*pile) ) {
        fprintf(stderr,"impossible de pop()\n" ) ;
        return -1 ;
    } 
    char tmp ;
    tmp = pile->tab[pile->head -1];
 	pile->head--;
    return tmp ;
}

char head (pile_t pile){
    if (is_empty(pile) ) {
        fprintf(stderr,"impossible de head()\n" ) ;
        return -1 ;
    } 
    return pile.tab[pile.head-1];
}

int is_empty( pile_t pile) {
    return pile.head == 0 ;
}

int is_full( pile_t pile ) {
    return pile.head == SIZETAB ;
}
