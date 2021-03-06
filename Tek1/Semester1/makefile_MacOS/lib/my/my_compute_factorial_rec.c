/*
** EPITECH PROJECT, 2021
** my_compute_factorial_rec
** File description:
** recursive function that returns the factorial of a number
*/

int my_compute_factorial_rec(int nb)
{
    int n = nb;

    if (nb == 0) {
        return (1);
    } else if (nb < 0 || nb >= 13) {
        return (0);
    }
    if (nb != 1) {
        n *= my_compute_factorial_rec(nb - 1);
        return (n);
    }
    return (0);
}
