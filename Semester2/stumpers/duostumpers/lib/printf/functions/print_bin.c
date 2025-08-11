/*
** EPITECH PROJECT, 2021
** file
** File description:
** none
*/

#include "file.h"
#include <stdarg.h>

void print_bin(va_list *args)
{
    unsigned int nbr = va_arg(*args, unsigned int);
    my_putbase(nbr, BIN_BASE);
}
