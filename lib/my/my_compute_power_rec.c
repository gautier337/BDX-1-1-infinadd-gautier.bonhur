/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** display the puissance of an number
*/

int my_compute_power_rec(int nb, int p)
{
    int endresult;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    endresult = nb * my_compute_power_rec(nb, p - 1);
    return endresult;
}
