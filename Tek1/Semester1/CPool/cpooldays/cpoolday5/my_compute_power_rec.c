/*
** EPITECH PROJECT, 2021
** my_computer_power_it
** File description:
** Iterative function that returns the first argument
*/

int my_compute_power_rec (int nb , int p)
{
    int i = 1;
    int total = nb;

    if (p == 0) {
        return(1);
    }
    if (p < 0) {
        return(0);
    }
    if (i < p) {
        total = my_compute_power_rec(nb, 1);
        i++;
    }
    return(total);
}

int main ()
{
    int nb = 5;
    int p = 2;
    my_compute_power_rec(nb, p);
}
