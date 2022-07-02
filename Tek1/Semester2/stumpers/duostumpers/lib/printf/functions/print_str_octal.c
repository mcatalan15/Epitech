/*
** EPITECH PROJECT, 2021
** file
** File description:
** none
*/

#include "file.h"
#include <stdarg.h>
#include <stdlib.h>

void padding_zeros(int nbr)
{
    int i = 2;
    while (nbr > 7) {
        i--;
        nbr /= 10;
    }
    while (i > 0) {
        my_putchar('0');
        i--;
    }
}

void print_str_octal(va_list *args)
{
    char *str = va_arg(*args, char *);
    int i = 0;
    while (str[i]) {
        if (str[i] < 32 || str[i] > 126) {
            my_putchar('\\');
            padding_zeros(str[i]);
            my_putbase(str[i], "01234567");
        } else {
            my_putchar(str[i]);
        }
        i++;
    }
}
