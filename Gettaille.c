#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Gettaille.h"
#include "StructLivre.h"
int Gettaille()
{
    FILE *f = NULL ;
    int taille=0;
    char chaine[500];
    f=fopen("livre.txt","r");
    if(f!=NULL)
    {while (fgets(chaine,500,f)!=NULL)//ajouter un #define
     {
         taille++;
     }
    }
    return taille;
}
