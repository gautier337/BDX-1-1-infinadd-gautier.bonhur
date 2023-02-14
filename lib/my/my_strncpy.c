/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** write a function that copies a string into another in function of N carac
*/

int my_strlen (char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n) {
        dest[i] = src[i];
        i++;
    }
    if (n > my_strlen(src)) {
        dest[n] = '\0';
    }
    return dest;
}
