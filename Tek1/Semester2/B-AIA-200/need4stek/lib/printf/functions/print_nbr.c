/*
** EPITECH PROJECT, 2021
** file
** File description:
** none
*/

#include "file.h"
#include <stdarg.h>

void print_nbr(va_list *args)
{
    long long int nbr = va_arg(*args, int);
    my_putnbr(nbr);
}

void print_nbr_u(va_list *args)
{
    unsigned int nbr = va_arg(*args, unsigned int);
    my_putnbr_u(nbr);
}
