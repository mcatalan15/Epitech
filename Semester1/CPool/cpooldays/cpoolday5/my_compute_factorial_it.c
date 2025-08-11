/*
** EPITECH PROJECT, 2021
** my_compute_factorial_it
** File description:
** Iterative function that returns the factorial as a parameter
*/

int my_compute_factorial_it (int nb)
{
    int  i = nb;

    if (nb <= 0 || nb > 12) {
        return(0);
    }
    else if (nb == 0) {
        return(1);
    }
    else {
        while (i > 1) {
        nb = (i - 1) * nb;
        i--;
        }
    }
    return (nb);    
}
