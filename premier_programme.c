#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

int choix;

printf("===Menu===\n1. Royal Cheese\n2. Mc Deluxe\n3. Mc Bacon\n4. Big Mac\n");

choix = 0;

while (choix != 1 || choix != 2 || choix != 3 || choix != 4)
{
    choix = 0;
    printf("Votre choix ? ");
    choix = getchar();

        if (choix == '1')
        {
            printf("Vous avez choisi le Royal Cheese.\n");
            break;
        }

        else if (choix == '2')
        {
            printf("Vous avez choisi le Mc Deluxe.\n");
            break;
        }

        else if (choix == '3')
        {
            printf("Vous avez choisi le Mc Bacon.\n");
            break;
        }

        else if (choix == '4')
        {
            printf("Vous avez choisi le Big Mac.\n");
            break;
        }
        else
        {
            printf("Sélectionnez à nouveau votre choix. Quel est le numéro du menu ?\n");
            getchar();
            continue;
        }
 

printf("prêt dans 10 minutes !");

return (0);
}

}







 //   switch (choix)
//  {
 //       case 1: 
 //           printf("Vous avez choisi le Royal Cheese.\n");
  //          break;
 //       case 2:
 //           printf("Vous avez choisi le Mc Deluxe.\n");
  //          break;
   //     case 3:
  //          printfquiq("Vous avez choisi le Mc Bacon\n");
  //          break;
  //      case 4:
  //          printf("Vous avez choisi le Big Mac\n");
  //          break;
 //       default :
 //           printf("Sélectionnez à nouveau votre choix. Quel est le numéro du menu ?\n");
 //           break;

  //  if (choix == 1 || choix == 2 || choix == 3 || choix == 4)
   //    break;
   // printf("Sélectionnez à nouveau votre choix. Quel est le numéro du menu ?\n");
 //while (choix != 1 || choix != 2 || choix != 3 || choix != 4);
