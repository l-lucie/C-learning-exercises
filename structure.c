/*Exercice : créez ce tableau de typePersonne et demandez les infos de chacun grâce à une boucle 
(qui se répète tant qu'il y a des joueurs). Faites un petit tableau de 2 joueurs pour commencer, 
mais si ça vous amuse, vous pourrez agrandir la taille du tableau plus tard.
Affichez à la fin du programme les infos que vous avez recueillies sur chacun des joueurs.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Personne Personne; // je crois qu'il faut le mettre dans un fichier .h mais j'ai pas trop compris 
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
    Personne joueur[2];
    i=0;
    int x;
    x= 0;
    

    while (i<2)
    {
        x = i + 1; // comme i commence à zéro, j'utilise x pour écrire le joureur 1 et pas le joueur 0 mais ça ne fonctionne pas
        printf("Informations que le joureur %d. \nQuel est votre prénom?", i);
        scanf("%s", joueur[i].prenom);
        printf("quel est votre nom?");
        scanf("%s", joueur[i].nom);
        printf("quel est votre age?");
        scanf("%d", &joueur[i].age);
        //printf("quel est votre genre (1 pour un garçon, 0 pour une fille)?");
        //scanf("%s", joueur.genre);
        // printf("quel est votre adresse?"); l'adresse complète n'est pas enregistrée, seul le premier mot 
        // scanf("%s[^\n]" joueur.adresse);

        i++;
    }

    while (i<2) //j'ai mis une autre boucle pour faire apparaitre tout d'un coup à la fin des questions, mais cela ne fonctionne pas non plus 
    {// j'aurais bien mis une boucle for mais tu me l'a interdite. 
        x = i + 1;
        printf("Bonjour %s %s, vous avez %d ans Vous serez le joueur %d./n/n", joueur[i].prenom, joueur[i].nom, joueur[i].age, x);
        i++;
    }


    return 0;
}// merciiii
