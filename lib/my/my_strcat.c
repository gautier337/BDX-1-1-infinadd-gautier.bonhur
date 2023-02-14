/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** my_strcapitalize
*/

int my_strlen (char const *str);

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';

    return dest;

}
