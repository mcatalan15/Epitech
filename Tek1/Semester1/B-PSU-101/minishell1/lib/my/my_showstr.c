/*
** EPITECH PROJECT, 2021
** my_showstr
** File description:
** showstr
*/

#include "my.h"

int my_putnbr_base(int nbr, char *base)
{
    if (nbr < 0) {
        nbr = nbr * -1;
        my_putchar('-');
    }
    if (nbr >= my_strlen(base) - 1)
        my_putnbr_base(nbr / my_strlen(base), base);
        my_putchar(base[nbr % my_strlen(base)]);
    return (nbr);
}

int my_showstr(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] < 32 || str[i] > 126) {
            my_putchar('\\');
            if (str[i] < 14) {
                my_putchar('0');
            }
            my_putnbr_base((str[i]), "0123456789abcdef");
        } else {
            my_putchar(str[i]);
        }
        i++;
    }
    return (0);
}