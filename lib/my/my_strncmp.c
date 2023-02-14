/*
** EPITECH PROJECT, 2021
** my_strswap
** File description:
** swap
*/

int my_strlen (char const *str);

int my_strncmp (char const *s1, char const *s2, int n)
{
    int i = 0;
    int count;
    int value = 0;

    while (s1[i] != s1[n] && s2[i] != s2[n]) {
        count = s1[i] - s2[i];
        if (count < 0) {
            return -1;
        } else if (count > 0) {
            return (1);
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