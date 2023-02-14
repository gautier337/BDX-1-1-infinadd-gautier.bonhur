/*
** EPITECH PROJECT, 2021
** my_print_alpha
** File description:
** No file there, just an epitech header example
*/

void my_putchar(char c);

int my_isneg (int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    my_putchar('\n');
}
