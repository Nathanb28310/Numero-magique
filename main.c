#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    int nb_user;
    int nb_essai = 10;
    printf("Choisissez un nombre entre 1 et 100 :\n");
    scanf("%d", &nb_user);
    while (nb_user < 1 || nb_user > 100)
    {   
        printf("Saisie incorrecte\nVeuillez rentrer une valeur correcte !\n");
        scanf("%d", &nb_user);
    }
    while (nb_user != random_number && nb_essai > 1){
        if (nb_user < random_number){
            printf("C'est plus !\n");
        }
        else
        {
            printf("C'est moins !\n");
        }

        nb_essai -= 1;

        if (nb_essai == 5)
        {
            printf("INDICE : le nombre mystère est ");
            if (random_number%2 == 0)
            {
                printf("pair\n");
            }
            else
            {
                printf("impair\n");
            }
            
        }
        printf("Plus que %d essai(s): \n", nb_essai);
        printf("Choisissez un nombre entre 1 et 100 :\n");
        scanf("%d", &nb_user);
    }
    if (nb_user == random_number)
    {                            
        printf("Gagné !\n");
    }
    else
    {
        printf("Perdu ! le numéro était : %d\n", random_number);
    }
    

    exit(0);
}
