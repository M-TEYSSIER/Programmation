#include <stdio.h>

struct Push
{
	char caractere[1];
	
};

int main ()
{

  char tab[10];			//Initialisation d'un tableau de caractères

  tab[0] = '{';			//Initialisation de caractères dans la première case du tableau
  tab[1] = 'B';
  tab[2] = 'A';
  tab[3] = '}';

  int lecture;
  lecture = 4;

  Push valeur;
  
  printf("Caractère à push: \n");
  
  scanf("%s",valeur.caractere);
  
  printf("%c",tab);

  
  
  
  /*  while (lecture < 10)
    {
      printf ("%c \n", tab[lecture]);	// Affichage des caractères du tableau
      lecture++;
    }

  int ouverture;		//Initialisation de la variable "ouverture"
  ouverture = 0;		// "ouverture" a pour valeur 0

  int fermeture;
  fermeture = ouverture++;

  if (tab[ouverture] = '{')
    {				//  Condition | Si dans le tableau (que l'on parcours) on trouve une Accolade

      while (tab[fermeture] != '}')
	{			// Tant que la lecture du tableau nous donne pas "}"
	  fermeture++;		// Incrémentaion | Déplacement dans le tableau
	}
      printf ("Ouverture et fermeture OK! \n");
    }*/
	return 0;

}
