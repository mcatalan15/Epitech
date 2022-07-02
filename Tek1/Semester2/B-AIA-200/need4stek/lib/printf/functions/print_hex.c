/*
** EPITECH PROJECT, 2021
** file
** File description:
** none
*/

#include "file.h"
#include <stdarg.h>

void print_hex_low(va_list *args)
{
    int nbr = va_arg(*args, int);
    my_putbase(nbr, HEX_BASE_LOW);
}

void print_hex_up(va_list *args)
{
    int nbr = va_arg(*args, int);
    my_putbase(nbr, HEX_BASE_UP);
}
