#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Enregistrer.h"
#include "StructLivre.h"
void Enregistrer(Livre L)
{
    FILE *f = NULL;
    f=fopen("livre.txt","a");
    fprintf(f,"%s;%.2f;%s/n",L.Titre,L.Prix,L.Auteur);
    fclose(f);
}
