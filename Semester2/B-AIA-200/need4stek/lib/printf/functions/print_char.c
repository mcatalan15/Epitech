/*
** EPITECH PROJECT, 2021
** file
** File description:
** none
*/

#include "file.h"
#include <stdarg.h>

void print_char(va_list *args)
{
    char c = va_arg(*args, int);
    my_putchar(c);
}
