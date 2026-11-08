#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int random_number = rand() % 100 + 1; // Génère un nombre aléatoire entre 1 et 100
    int nb_user; // Variable qui va récupérer la saisie du joueur
    int nb_essai = 10; // Nombre de tentatives
    printf("Choisissez un nombre entre 1 et 100 :\n");
    scanf("%d", &nb_user); // Récupère la saisie du joueur et la stocke dans la variable associée
    while (nb_user < 1 || nb_user > 100) // Boucle pour vérifier la saisie, qui recommencera tant que la saisie n'est pas correcte
    {   
        printf("Saisie incorrecte\nVeuillez rentrer une valeur correcte !\n"); // Redemande une saisie correcte
        scanf("%d", &nb_user);
    }
    while (nb_user != random_number && nb_essai > 1){ // Boucle principale du jeu, qui s'arrête si le joueur à trouver le numéro ou n'a plus de tentative
        if (nb_user < random_number){ // Est ce que la saisie est plus petit que le numero aléatoire 
            printf("C'est plus !\n"); // Affiche que le numéro aléatoire est plus grand
        }
        else // Et inversement
        {
            printf("C'est moins !\n");
        }

        nb_essai -= 1; // Retire 1 au nombre de tentatives

        if (nb_essai == 5) // si le joueur à fait 5 essais
        {
            printf("INDICE : le nombre mystère est "); // Affiche si le nombre est pair
            if (random_number%2 == 0)
            {
                printf("pair\n");  
            }
            else
            {
                printf("impair\n"); // Et inversement
            }
            
        }
        printf("Plus que %d essai(s): \n", nb_essai); // Montre le nombre d'essais qui reste au joueur
        printf("Choisissez un nombre entre 1 et 100 :\n"); // Redemande une saisie
        scanf("%d", &nb_user);
    }
    if (nb_user == random_number) // affiche si le joueur à 
    {                            
        printf("Gagné !\n"); // Gagné
    }
    else
    {
        printf("Perdu ! le numéro était : %d\n", random_number); // Perdu
    }
    

    exit(0);
}
