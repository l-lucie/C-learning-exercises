#include <stdio.h>
#include <stdlib.h>


void ordonnerTableau(int tableau[], int tailleTableau)
{
    int i;
    int x;
    int y;
    i = 0;
    y = tailleTableau-1;
    x = 0;
    

    while (i<y)
    {
        if (tableau[i] > tableau[i+1])
        {
            x=tableau[i];
            tableau[i]=tableau[i+1];
            tableau[i+1] = x;
            i = 0;
        } 
        else
        i++;
    }
}

int main()
{
    int tableau[] = {15, 81, 22, 13};
    int i;    

    ordonnerTableau(tableau, 4);
    i = 0;

    while (i<4)
    {
        printf("%d\n", tableau[i]);
        i++;
    }

    return 0;
}
    