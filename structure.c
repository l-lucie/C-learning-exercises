#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exo5.h"


typedef struct Personne Personne;  
struct Personne
{
    char nom[100];
    char prenom[100];
    char adresse[1000];

    int age;
    int genre; 
};

int main()
{
    int size;
    int i;
    int x;
    Personne joueur_tableau[2];
  //  Personne joueur_p[2];
    
    size = 0;
    i=1;
    x=0;

    // asking informations //

    printf("Bonjour et bienvenue :) \n\n Combien de joueur y a-t-il aujourd'hui ? ");
    scanf("%d", &size);
  
    i=0;
    while(i<size)
    {
       // Personne joueur_p[i];
        printf("Quel est votre prenom? );
        scanf("%s", joueur_tableau[i].prenom);
        printf("Tres bien %s, et quel est votre age ? ", joueur_tableau[i].prenom);
        scanf("%d", &joueur_tableau[i].age);
        i++;
    }

/*
    Personne joueur_p1;
    printf("Quel est votre prenom ? ");
    scanf("%s", joueur_p1.prenom);
    printf("Tres bien %s, et quel est votre age ? ", joueur_p1.prenom);
    scanf("%d", &joueur_p1.age);
    

    Personne joueur_p2;
    printf("Quel est votre prenom ? ");
    scanf("%s", joueur_p2.prenom);
    printf("Tres bien %s, et quel est votre age ? ", joueur_p2.prenom);
    scanf("%d", &joueur_p2.age);
    */

    // creating the array with the collected data //
  /*  i=0;
    while(i<size)
    {
        joueur_tableau[i].age = joueur_p[i].age;
        strcpy(joueur_tableau[i].prenom, joueur_p[i].prenom);
        i++;
    }
/*
    joueur_tableau[0].age = joueur_p1.age;
    strcpy(joueur_tableau[0].prenom, joueur_p1.prenom);
    joueur_tableau[1].age = joueur_p2.age;
    strcpy(joueur_tableau[1].prenom, joueur_p2.prenom);
*/
    // fonction to order the array : //

    int j;
    int k;
    Personne swap;
    
    j = 0;
    k=0;


    while (k<size-1)
    {
        while (j<size-1)
        {
            if (joueur_tableau[j].age > joueur_tableau[j+1].age)
            {
                swap.age = joueur_tableau[j].age;
                strcpy(swap.prenom, joueur_tableau[j].prenom);
                // swap.prenom = joueur_tableau[j].prenom;

                joueur_tableau[j].age = joueur_tableau[j+1].age;
                strcpy(joueur_tableau[j].prenom, joueur_tableau[j+1].prenom);
                // joueur_tableau[j][k]=joueur_tableau[j+1][k];

                joueur_tableau[j+1].age = swap.age;
                strcpy(joueur_tableau[j+1].prenom, swap.prenom);
                // joueur_tableau[j+1].prenom = swap.prenom;
                j=0;
            } 
            else
            j++;
        }
    k++;
    }

    i=0;
    while(i<size)
    {
    
    printf("\n Joueur %d est [%s], [%d]", i+1, joueur_tableau[i].prenom, joueur_tableau[i].age);
    i++;
    }


/*
    printf("\n Joueur 1 est %s, %d", joueur_tableau[0].prenom, joueur_tableau[0].age);
    printf("\n Joueur 2 est %s, %d\n", joueur_tableau[1].prenom, joueur_tableau[1].age);
*/
    return 0;
}

