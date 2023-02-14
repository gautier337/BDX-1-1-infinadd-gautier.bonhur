/*
** EPITECH PROJECT, 2021
** infinadd
** File description:
** errors
*/

#include "include/my.h"

int errors(int argnb, char **argv)
{
    if (argnb == 3)
        return (0);
    else
        return (84);
}
