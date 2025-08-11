/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** x
*/

int my_compute_power_rec(int nb, int p)
{
    int result = nb;

    if (nb == 0 || p < 0) {
        return (0);
    }

    if (p == 0) {
        return (1);
    }

    result = result * my_compute_power_rec(nb, p - 1);

    if (result > 2147483647) {
        return (0);
    }
    return (result);
}
