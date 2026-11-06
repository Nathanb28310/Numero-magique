#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    int nb_user;
    printf("Choisissez un nombre entre 1 et 100\n");
    scanf("%d", &nb_user);
    exit(0);
}
