#include <stdio.h>
#include <stdlib.h>


void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
    int i;
    i = 0;
    while (i<tailleTableau)
    {
        if (tableau[i] > valeurMax)
        {
            tableau[i]=0;
            i++;
        }

        else 
            i++;
    }
}

int main()
{
    int tableau[] = {20, 5, 18, 2};
    int valeurMax;
    int i;    

    //valeurMax = 10;

    maximumTableau(tableau, 4, 10);
    i = 0;

    while (i<4)
    {
        printf("%d\n", tableau[i]);
        i++;
    }

    return 0;
}
    