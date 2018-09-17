#include <stdio.h>

typedef struct {
	int a;
	float b;
} pile;

int main(){
	pile x;//appel de la struct enreg en x
	void fct (pile y);//appel de la fonction fct qui ne renvoi rien
	x.a =1; x.b=12.5; // initialisation des variables
	printf("\navant appel fct: %d %e", x.a, x.b);// affichage des valeurs dans les varables
	fct(x);//envoi à la fonction les valeurs de la struct de x | ne change en rien les valeurs dans le main car ca tourne dans fct et pas en dehors
	printf("\nau retour dans main: %d %e\n", x.a, x.b);//affichage des varables non modifiées
}

void fct(pile s){ //création d'une fonction ne revoyant rien
	s.a =0 ; s.b=1;//initialisation de deux valeurs qui modifirons les valeurs des variables de struct quand on appelera la fonction
	printf("\n dans fct: %d %e", s.a , s.b);// affichage des valeurs des variables
}

/* remarque:
 *
 * Lorsque l'on passe les valeurs de x.a et x.b dans la fonction fct, aucunes valeurs au retour dans le main n'est exporté.
 * x.a et x.b garde leurs valeurs 
*/
