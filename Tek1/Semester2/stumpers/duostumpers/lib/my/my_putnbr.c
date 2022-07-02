/*
** EPITECH PROJECT, 2021
** my_putnbr
** File description:
** print integer number
*/

#include "file.h"

void my_putnbr(long long int nb)
{
    if (nb < 0) {
        my_putchar('-');
        my_putnbr(nb * -1);
    } else if (nb > 9) {
        my_putnbr(nb / 10);
        my_putchar((nb % 10) + '0');
    } else {
        my_putchar(nb + '0');
    }
}
