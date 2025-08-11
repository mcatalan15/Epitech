/*
** EPITECH PROJECT, 2021
** file
** File description:
** none
*/

#include "file.h"
#include <stdarg.h>

void print_oct(va_list *args)
{
    int nbr = va_arg(*args, int);
    my_putbase(nbr, OCT_BASE);
}
