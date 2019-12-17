/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlusOuMoins.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucie <lucie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 22:39:03 by lucie             #+#    #+#             */
/*   Updated: 2019/12/17 22:40:06 by lucie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
    int nombreMystere;
    int nombreTeste;
    int tentatives;
    int nouvellePartie;  
    int modeJeu; 
    int nombreChoisis;
    int niveau; 
    int nombreMax;

    nouvellePartie = 1;
    printf("--Le Jeu du 'Plus ou Moins'--\n\nVotre objectif : trouver le nombre mystere qui est dans un intervalle choisi.\n\n");
    while (nouvellePartie)
    {
        niveau = 0;
        modeJeu = 0;
        printf("MODES DE JEU : \n\n 1 - Mode Solo\n 2 - Mode Duo\n\nChoisissez un mode : ");
        scanf("%d", &modeJeu);
        printf("     - Niveaux de difficulté - \n\n  1 - Entre 0 et 100\n  2 - Entre 0 et 1000\n  3 - Entre 0 et 10000\n\n Quelle niveau choisissez-vous ? ");
        scanf("%d", &niveau);
            if (niveau == 1)
                nombreMax = 100;
            if (niveau == 2)
                nombreMax = 1000; 
            if (niveau == 3)
                nombreMax = 10000;
        if (modeJeu == 1)
        {    
            printf("    -- MODE SOLO : Niveau %d--\n\n", niveau);    
            int max = nombreMax, min = 1;
            srand(time(NULL));
            nombreMystere = (rand() % (max - min + 1)) + min;
            tentatives = 0;
            printf("nombre mystère est : %d    ", nombreMystere);
            while (nombreTeste != nombreMystere)
                {
                    tentatives ++;
                    printf("\nChoisissez un nombre entre 0 et %d : ", nombreMax);
                    scanf("%d",&nombreTeste);
                    /*nombreTeste = 'g';
                    if (isdigit(nombreTeste) == 0)
                        printf("%d n'est pas un nombre entre 0 et 100 petit malin! Reessaie. \n", nombreTeste);
                    else
                    {*/
                    if (nombreTeste == nombreMystere)
                        break;
                    else if (nombreTeste > nombreMystere && nombreTeste < nombreMax)
                        printf("Presque ! C'est moins...\n");
                    else if (nombreTeste < nombreMystere && nombreTeste > 0)
                        printf("Bientôt, c'est plus...\n");
                    else if (nombreTeste > nombreMax || nombreTeste < 0)
                        printf("On a dit entre 0 et %d petit malin ;)\n", nombreMax);     
                    //}
                }
            printf("\nBravo c'est gagné en %d coups :)\n\n", tentatives);
            printf("Si vous souhaitez jouer à nouveau, entrez en chiffre sinon entrez 0 : ");
            scanf("%d", &nouvellePartie);
        }
        else if (modeJeu == 2)
        {
            printf("\n    -- MODE DUO : Niveau %d--\n\nLe joueur 1 choisis un nombre entre 0 et %d : ", niveau, nombreMax);
            scanf("%d", &nombreChoisis);
            tentatives = 0;
            while (nombreTeste != nombreChoisis)
            {
                tentatives ++;
                printf("Joueur 2, choisissez un nombre entre 0 et %d : ", nombreMax);
                scanf("%d",&nombreTeste);
                if (nombreTeste == nombreChoisis)
                    break;
                else if (nombreTeste > nombreChoisis && nombreTeste < nombreMax)
                    printf("Presque ! C'est moins...\n");
                else if (nombreTeste < nombreChoisis && nombreTeste > 0)
                    printf("Bientôt, c'est plus...\n");
                else if (nombreTeste < 0 || nombreTeste > nombreMax)
                    printf("On a dit entre 0 et %d petit malin ;)\n\n", nombreMax);     
            }
            printf("\nBravo c'est gagné en %d coups :)\n\n", tentatives);
            printf("Si vous souhaitez jouer à nouveau, entrez en chiffre sinon entrez 0 : ");
            scanf("%d", &nouvellePartie);
        }
        else
            printf("ERROR\n\n");
    }
    printf("A bientoooot !\n");
    return (0);
}
