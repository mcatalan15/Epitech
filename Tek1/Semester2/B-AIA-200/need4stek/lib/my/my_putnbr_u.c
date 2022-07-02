/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** print integer number
*/

#include "file.h"

void my_putnbr_u(unsigned int nb)
{
    if (nb > 9) {
        my_putnbr_u(nb / 10);
        my_putchar((nb % 10) + '0');
    } else {
        my_putchar(nb + '0');
    }
}
