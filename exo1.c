#include <stdio.h>
#include <stdlib.h>


int sommeTableau(int *tableau, int tailleTableau)
{
    int somme; 
    int i; 
    
    somme = 0;
    i=0;

    while (i<tailleTableau)
    {
      somme = somme + tableau[i];
      i++;
    }
    return (somme);
}

int main()
{
    int tableau[] = {10, 15, 3};
    int somme; 

    somme = sommeTableau(tableau, 3);
    
    printf("la somme est : %d", somme);
    return (0);
}

