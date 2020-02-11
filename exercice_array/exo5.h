
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