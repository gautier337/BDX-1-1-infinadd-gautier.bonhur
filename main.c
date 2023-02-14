/*
** EPITECH PROJECT, 2021
** main
** File description:
** infinadd
*/

#include "include/my.h"

int errors(int argnb, char **argv);
char *mallocation(int argnb, char **argv);
void calcul(char *result, int argnb, char **argv);

int main(int argnb, char **argv)
{
    if (errors(argnb, argv) == 0) {
        calcul(mallocation(argnb, argv), argnb, argv);
        return (0);
    } else {
        my_putstr("Erreur\n");
        return (84);
    }
}