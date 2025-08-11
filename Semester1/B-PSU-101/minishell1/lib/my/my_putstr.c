/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** a function that displays, one-by-one, the characters of a string
*/

#include "my.h"

int my_putstr(char *str)
{
    int  n = 0;

    while (str[n] != '\0') {
        my_putchar(str[n]);
        n++;
    }
    //my_putchar('\n');
    return (0);
}
