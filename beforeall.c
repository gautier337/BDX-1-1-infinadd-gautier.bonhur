/*
** EPITECH PROJECT, 2021
** infinadd
** File description:
** beforeall
*/

#include "include/my.h"

char *boucle(int len, char **argv, char *result, int test);
char *reverse(char **argv);

int size(char **argv)
{
    if (my_strlen(argv[1]) > my_strlen(argv[2]))
        return 1;
    else
        return 0;
}

void calcul(char *result, int argnb, char **argv)
{
    int lenght = 0;
    int i = 0;
    int test = 0;

    if (size(argv) == 1)
        lenght = my_strlen(argv[1]);
    else
        lenght = my_strlen(argv[2]);
    reverse(argv);
    my_putstr(my_revstr(boucle(lenght, argv, result, test)));
    my_putchar('\n');
}
