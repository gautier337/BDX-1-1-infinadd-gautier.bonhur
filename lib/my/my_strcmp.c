/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** str_cmp
*/

int my_strlen (char const *str);

int my_strcmp (char const *s1, char const *s2)
{
    int i = 0;
    int count;
    int value = 0;

    while (s2[i] != '\0' && s1[i] != '\0') {
        count = s1[i] - s2[i];
        if (count < 0) {
            return -1;
        } else if (count > 0) {
            return 1;
        } else {
            i++;
        }
    }
    if (my_strlen(s1) > my_strlen(s2)) {
        return 1;
    } else if (my_strlen(s1) > my_strlen(s2)) {
        return -1;
    }
    return 0;
}
