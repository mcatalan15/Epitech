/*
** EPITECH PROJECT, 2021
** my_putfloat
** File description:
** print float number
*/

#include "file.h"

void my_putfloat(double nb, int precision)
{
    my_putnbr(nb);
    if (precision != 0) {
        nb -= (int)nb;
        nb *= my_power(10, precision);
        my_putchar('.');
        my_putnbr(nb);
    }
}
