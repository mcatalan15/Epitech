/*
** EPITECH PROJECT, 2021
** my_is_prime
** File description:
** x
*/

int my_is_prime(int nb)
{
    int res = 2;

    if (nb <= 1) {
        return (0);
    }

    while (nb > res && nb % res != 0) {
        res++;
    }

    if (res == nb) {
        return (1);
    } else {
        return (0);
    }
    return (0);
}
