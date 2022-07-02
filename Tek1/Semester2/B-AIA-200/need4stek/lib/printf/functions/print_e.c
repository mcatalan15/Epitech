/*
** EPITECH PROJECT, 2021
** file
** File description:
** none
*/

#include "file.h"
#include <stdarg.h>

void print_e(va_list *args)
{
    float nbr = va_arg(*args, double);
    int i = 0;
    while (nbr > 10) {
        nbr /= 10;
        i++;
    }
    my_putfloat(nbr, 6);
    my_putstr("e+");
    if (i < 10) {
        my_putchar('0');
    }
    my_putnbr(i);
}
