#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GetLivres.h"
#include "Gettaille.h"
#include "Enregistrer.h"
#include "StructLivre.h"

int main()
{  int choix;
   Livre L;
   int taille,i;
   Livre *T;
  do
  {
      printf("tapez 1 pour Ajoutez un livre\n");
      printf("tapez 2 pour Afficher les livres\n");
      printf("tapez 3 pour quitter l'application\n");
      scanf("%d",&choix);
      getchar();
      switch (choix)
      {
      case 1:

        puts("tapez le titre");
        gets(L.Titre);
        puts("tapez le prix");
        scanf("%f",&L.Prix);
        getchar();// /n
        puts("tapez l'auteur");
        gets(L.Auteur);
        Enregistrer(L);
        break;
      case 2:
         taille =Gettaille();
         T=malloc(taille*sizeof(Livre));
         T=GetLivres(taille);
         for (i=0;i<taille;i++)
         {
             printf("%s %.2f %s \n",T[i].Titre,T[i].Prix,T[i].Auteur);         }
        break;
      }
  }while (choix!=3);

    return 0;
}





