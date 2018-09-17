#ifndef Pile_H
#define Pile_H

#define SIZETAB 200

typedef struct rangement{
    char tab[SIZETAB];
    int head;
}pile_t;   


void push (pile_t* pile,char C) ;
char pop (pile_t* pile);
char head (pile_t pile);
int is_empty( pile_t pile) ;
int is_full( pile_t pile ) ;

#endif 
