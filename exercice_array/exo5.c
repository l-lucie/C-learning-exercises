#include <stdio.h>
#include <stdlib.h>
#include "exo5.h"

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
    