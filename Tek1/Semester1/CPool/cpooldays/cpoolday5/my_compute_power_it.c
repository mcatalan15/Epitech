/*
** EPITECH PROJECT, 2021
** my_computer_power_it
** File description:
** Iterative function that returns the first argument
*/

int my_iterative_funct (int nb, int p, int i, int total)
{
    while (i < p) {
        total *= nb;
        i++;
    }
    return(i);
}

int my_compute_power_it (int nb , int p)
{
    int i = 1;
    int total = nb;

    if (nb == 0) {
        return(1);
    }
    else if (p < 0) {
        return(0);
    }
    else {
        my_iterative_funct(nb, p, i, total);
        return(total);
    }
}
