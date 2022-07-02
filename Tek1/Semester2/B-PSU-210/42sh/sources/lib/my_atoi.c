/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdlib.h>

int my_atoi(char *str)
{
    int res;

    if (str == NULL)
        return (0);
    if (*str == '-')
        return (-my_atoi(++str));
    if (*str == '+')
        return (my_atoi(++str));
    res = 0;
    while (*str) {
        if (*str > '9' || *str < '0')
            return (0);
        res = res * 10;
        res = res + *str - '0';
        ++str;
    }
    return (res);
}
