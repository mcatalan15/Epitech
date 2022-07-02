/*
** EPITECH PROJECT, 2021
** my_compute_factorial_rec
** File description:
** Recursive function that returns the factorial of a number
*/

int my_compute_factorial_rec(int nb)
{
    int x = nb;

    if (nb == 0) {
        return (1);
    } else if (nb < 0 || nb >= 13) {
        return (0);
    }
    if (nb != 1) {
        x *= my_compute_factorial_rec(nb - 1);
        return (x);
    }
    return (0);
}
