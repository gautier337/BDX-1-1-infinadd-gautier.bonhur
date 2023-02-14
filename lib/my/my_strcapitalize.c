/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** my_strcapitalize
*/

char *my_strlowcase(char *str);

void test_letter(int i, char *str)
{
    if (!(str[i - 1] >= 48 && str[i - 1] <= 58))
        str[i] = str[i] - 32;
}

char *my_strcapitalize(char *str)
{
    int i = 0;

    my_strlowcase(str);
    if ((str[i] >= 'a') && (str[i] <= 'z')) {
        str[i] = str[i] - 32;
        i++;
    }
    while (str[i] != '\0') {
        if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z') &&
        (str[i] >= 'a' && str[i] <= 'z') &&
        !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')) {
            test_letter(i, str);
        }
        i++;
    }
    return (str);
}
