
void ordonnerTableau(int tableau[], int tailleTableau)
{
    int i;
    int swap;
    int y;
    
    i = 0;
    y = tailleTableau-1;
    swap = 0;

    while (i<y)
    {
        while (i<y)
        {
            if (tableau[i] > tableau[i+1])
            {
                swap=tableau[i];
                tableau[i]=tableau[i+1];
                tableau[i+1] = swap;
                i = 0;
            } 
            else
            i++;
        }
    i++;
    }
}