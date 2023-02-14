/*
** EPITECH PROJECT, 2021
** infinadd
** File description:
** infinadd
*/

#include "include/my.h"
#include <stdlib.h>

int errors(int argnb, char **argv);
int checkretenue(char **arga, char **argb, int retenue, char *result);
int size(char **argv);
void calcul(char *result, int argnb, char **argv);

char *mallocation(int argnb, char **argv)
{
    char *result;

    if (my_strlen(argv[1]) > my_strlen(argv[2]))
        result = malloc(sizeof(char) * (my_strlen(argv[1]) + 2));
    else
        result = malloc(sizeof(char) * (my_strlen(argv[2]) + 2));
    return result;
}

char *reverse(char **argv)
{
    argv[1] = my_revstr(argv[1]);
    argv[2] = my_revstr(argv[2]);
    return argv;
}

char *checkcondition(char **argv, int det, char *result, int i)
{
    if (argv[1][i] + det > '9')
        result[i] = '0';
    else
        result[i] = (argv[1][i]) + det;
    return result[i];
}

char *checkcondition2(char **argv, int det, char *result, int i)
{
    if (argv[2][i] + det > '9')
        result[i] = '0';
    else
        result[i] = (argv[2][i]) + det;
    return result[i];
}

char *boucle(int len, char **argv, char *result, int test)
{
    int i = 0;
    int det = 0;
    for (; i < len; i++) {
        if (argv[1][i] != '\0' && argv[2][i] != '\0' && test == 0) {
            det = checkretenue(argv, i, det, result) == 1 ? 1 : 0;
        } else if (size(argv) == 1) {
            result[i] = checkcondition(argv, det, result, i);
            det = !(argv[1][i] + det > '9') ? 0 : 1;
            test = 1;
        } else {
            result[i] = checkcondition2(argv, det, result, i);
            det = !(argv[2][i] + det > '9') ? 0 : 1;
            test = 1;
        }
    }
    result[i] = (det == 1) ? '1' : NULL;
    result[i + 1] = (det == 1) ? '\0' : NULL;
    return result;
}