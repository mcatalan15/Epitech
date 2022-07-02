/*
** EPITECH PROJECT, 2021
** file
** File description:
** none
*/

#include "file.h"
#include <stdarg.h>
#include <stdlib.h>

void print_str(va_list *args)
{
    char *str = va_arg(*args, char *);
    my_putstr(str);
}
