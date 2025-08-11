/*
** EPITECH PROJECT, 2021
** my_compute_square_root
** File description:
** x
*/

int my_compute_square_root(int nb)
{
    int res = 1;

    if (nb <= 0) {
        return (0);
    }

    while ((res * res) != nb) {
        res++;
        if (res > nb) {
            return (0);
        }

        if ((res * res) == nb) {
            return (res);
        }
    }
    return (res);
}
