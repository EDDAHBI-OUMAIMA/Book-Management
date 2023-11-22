#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GetLivres.h"
#include "StructLivre.h"
Livre* GetLivres(int taille)
{
    Livre *tab=calloc(taille,sizeof(Livre));
    int pos,i;
    pos=0;
    char chaine[500];
    char *ch;
    FILE *f=NULL;
    f=fopen("livre.txt","r");
    if(f!=NULL)
    {while (fgets(chaine,500,f)!=NULL)//ajouter un #define
     {
         ch=strtok(chaine,";");
         i=0;
         while(ch!=NULL)
         {
             if(i==0)
                strcpy(tab[pos].Titre,ch);
             else if(i==1)
                tab[pos].Prix=atof(ch);
             else
                strcpy(tab[pos].Auteur,ch);
             i++;
             ch=strtok(NULL,";");
         }
     }pos++;

    }fclose(f);
    return tab;


}
