#include <stdio.h>
#include <stdlib.h>


void copie(int *tableauOriginal, int *tableauCopie, int tailleTableau)
{
    int i;
    i = 0;
    while (i<tailleTableau)
        {
            tableauCopie[i]=tableauOriginal[i];
            i++;
        }
}

int main()
{
    int tableauOriginal[] = {1, 2, 3, 4};
    int tableauCopie[] = {0, 0, 0, 0}; 
    int i;    


    copie(tableauOriginal, tableauCopie, 4);
    i = 0;
    //affiche (tableauCopie, 4);
    while (i<4)
    {
        printf("%d\n", tableauCopie[i]);
        i++;
    }

    // Affichage de ses valeurs pour vérifier
    /*for (i = 0 ; i < 4 ; i++)
    {
        printf("%d\n", tableauCopie[i]);
    }*/

    return 0;
}
    

