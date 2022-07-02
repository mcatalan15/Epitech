/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** Function that returns the square root
*/

int func(int x, int i, int nb)
{
    while (i < nb) {
        x = nb % i;
        if (x == 0 ) {
            x = i * i;
            if (nb == x) {
                return (x);
            }
        }
    }  i++;
    return (0);
}

int my_compute_square_root(int nb)
{
    int impar = nb % 1;
    int x = 0;
    int i = 2;

    if (nb <= 0 || impar == 1) {
        return (0);
    } else if (nb == 1) {
        return (1);
    } else {
        return (func(x, i, nb));
    }
        return (0);
}