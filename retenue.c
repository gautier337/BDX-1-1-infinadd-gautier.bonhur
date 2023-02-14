/*
** EPITECH PROJECT, 2021
** infinadd
** File description:
** retenue
*/

#include "include/my.h"

int checkretenue(char **argv, int i, int retenue, char *result)
{
    if (((argv[1][i]) + (argv[2][i])) + retenue - 48 > '9') {
        result[i] = ((( (argv[1][i]) + (argv[2][i]) ) - 48) - 10) + retenue;
        return 1;
    } else {
        result[i] = ((argv[1][i]) + (argv[2][i]) - 48) + retenue;
        return 0;
    }
}