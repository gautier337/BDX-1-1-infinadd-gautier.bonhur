/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** find text in sentence
*/

#include <stddef.h>

int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int x = 0;
    char *save;

    while (str[i] != '\0') {
        if (str[i] == to_find[x]) {
            x++;
        } else if (to_find[x] == '\0') {
            save = &str[i - x];
            return save;
        } else {
            x = 0;
        }
        i++;
    }
    return NULL;
}
