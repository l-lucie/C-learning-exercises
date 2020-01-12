#include <stdio.h>
#include <stdlib.h>

double moyenneTableau(int tableau[], int tailleTableau)
{
    int i; 
    double moyenne;
    int somme;

    somme = 0; 
    i = 0;
    moyenne = 0; 

    while (i<tailleTableau)
    {
        somme = somme + tableau[i];    
        i++;   
    }
    moyenne = somme / tailleTableau; 

    return(moyenne);
}

int main()
{
    int tableau[] = {10, 15, 3};
    double moyenne; 

    moyenne = moyenneTableau(tableau, 3);
    printf("la putain de moyenne est %f", moyenne);

    return(0);
}
