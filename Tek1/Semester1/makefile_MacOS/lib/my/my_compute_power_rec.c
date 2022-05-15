/*
** EPITECH PROJECT, 2021
** my_compute_power_it
** File description:
** recursive function that makes nb raised to p
*/

int my_compute_power_rec(int nb, int p)
{
    int result = 0;
    int i = 0;

    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    }
    if (i < p) {
        result = my_compute_power_rec(nb, 1);
        i++;
    }
    return (result);
}
