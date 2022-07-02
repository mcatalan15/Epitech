/*
** EPITECH PROJECT, 2021
** file
** File description:
** none
*/

#include "file.h"
#include <stdarg.h>

void print_pointer(va_list *args)
{
    long long int nbr = va_arg(*args, int);
    my_putstr("0x");
    my_putbase(nbr, HEX_BASE_LOW);
}
