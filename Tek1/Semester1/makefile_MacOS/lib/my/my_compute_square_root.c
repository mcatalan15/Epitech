/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** function that returns the square root
*/

int my_compute_square_root( int nb)
{
    int impar = nb % 1;
    int squareroot;
    int i = 2;

    if (nb <= 0 || impar == 1) {
        return (0);
    }
    else if ( nb == 1) {
        return (1);
    }
    else {
        while (i < nb) {
            squareroot = nb % i;
            if (squareroot == 0 ) {
                squareroot = i * i;
                if (nb == squareroot) {
                    return (squareroot);
                }
            }
            i++;
        }
        return (0);
    }
}

