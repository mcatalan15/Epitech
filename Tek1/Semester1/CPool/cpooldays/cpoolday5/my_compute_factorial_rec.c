/*
** EPITECH PROJECT, 2021
** my_compute_factorial_rec
** File description:
** Recursive function that returns the factorial of a parameter
*/

int my_compute_factorial_rec (int nb)
{
    int i = 0;

    if (nb < 0) {
        return(0);
    }
    else if (nb == 0 || nb == 1) {
        return (1);
    }
    else {
        i *= my_compute_factorial_rec(nb - 1);
    }
    return (i);
}
