#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    int nb_user;
    printf("Choisissez un nombre entre 1 et 100 :\n");
    scanf("%d", &nb_user);
    while (nb_user != random_number){
        if (nb_user < random_number){
            printf("C'est plus !\n");
        }
        else
        {
            printf("C'est moins !\n");
        }
        printf("Choisissez un nombre entre 1 et 100 :\n");
        scanf("%d", &nb_user);
    }
    if (nb_user == random_number)
    {
        printf("Gagné !\n");
    }

    exit(0);
}
