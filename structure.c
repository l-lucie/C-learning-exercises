/*Exercice : créez ce tableau de typePersonne et demandez les infos de chacun grâce à une boucle 
(qui se répète tant qu'il y a des joueurs). Faites un petit tableau de 2 joueurs pour commencer, 
mais si ça vous amuse, vous pourrez agrandir la taille du tableau plus tard.
Affichez à la fin du programme les infos que vous avez recueillies sur chacun des joueurs.*/

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
    int genre; //1=garcon, 0=fille
};

int main()
{
    int i;
    int x;
    Personne joueur_tableau[2];
    
    i=0;
    x=0;
    /*
    while (i<2)
    {
        x = i + 1; // comme i commence à zéro, j'utilise x pour écrire le joureur 1 et pas le joueur 0 mais ça ne fonctionne pas
        printf("   --  Vos informations --\n\nJoueur %d. \nQuel est votre prénom?  ", i);
        scanf("%s", joueur[i].prenom);
     // printf("quel est votre nom?  ");
     //   scanf("%s", joueur[i].nom);
        printf("quel est votre age?  ");
        scanf("%d", &joueur[i].age);
        //printf("quel est votre genre (1 pour un garçon, 0 pour une fille)?");
        //scanf("%s", joueur.genre);
        // printf("quel est votre adresse?"); l'adresse complète n'est pas enregistrée, seul le premier mot 
        // scanf("%s[^\n]" joueur.adresse);

        i++;
    }*/

    Personne joueur_p1;
    joueur_p1.age = 30;
    //joueur_p1.prenom = "lucie";
    scanf("%s", joueur_p1.prenom);

    Personne joueur_p2;
    joueur_p2.age = 10;
    //joueur_p2.prenom = "criteo";
    scanf("%s", joueur_p2.prenom);

    joueur_tableau[0]=joueur_p1;
    joueur_tableau[1]=joueur_p2;   

   // ordonnerTableau(joueur_tableau, 2); 


    


    printf("\n Joueur 1, prenom = [%s], age = [%d]", joueur_p1.prenom, joueur_p1.age);
    printf("\n Joueur 2, prenom = [%s], age = [%d]", joueur_p2.prenom, joueur_p2.age);
/*
    //int j;    

 

    int j,k;
    for (j = 0; j<2;j++)
    {
        for (k=0;k<2;k++)
        {
            printf("tab[%d][%d] = %dn", i,j, tableau[j][k]);
        }
    }

    



/*
    while (i<2)
    {
        
        printf("age : %d, prenom : %s\n", tableau[i], joueur[i].prenom);
        i++;
    }

/*
            
            // This pointer will hold the 
            // base address of the block created 
    int* ptr; 
    int n, k; 
  
    // Get the number of elements for the array 
    n = 2; 
    printf("Enter number of elements: %d\n", n); 
  
    // Dynamically allocate memory using malloc() 
    ptr = (int*)malloc(n * sizeof(int)); 
  
    // Check if the memory has been successfully 
    // allocated by malloc or not 
    if (ptr == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
  
        // Memory has been successfully allocated 
        printf("Memory successfully allocated using malloc.\n"); 
  
        // Get the elements of the array 
        for (k = 0; k < n; ++k) { 
            ptr[k] = ; 
        } 
  
        // Print the elements of the array 
        printf("The elements of the array are: "); 
        for (i = 0; i < n; ++i) { 
            printf("%d, ", ptr[i]); 
        } 
    } 




x=0;
i=0;


    while (i<2) 
    { 
        x = i + 1;
        printf("Bonjour %s %s. Vous serez le joueur %d.\n\n", joueur[i].prenom, joueur[i].nom, x);
        i++;
    }
*/

    return 0;
}

