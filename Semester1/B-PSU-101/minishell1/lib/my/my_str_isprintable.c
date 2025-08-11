/*
** EPITECH PROJECT, 2021
** my_str_isprintable.c
** File description:
** x
*/
#include <ctype.h>

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (isprint(str[i]) == 0)
            return (0);
        i++;
    } if (i == 0)
        return (0);
    else
        return (1);
}
