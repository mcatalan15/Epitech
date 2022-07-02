/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdlib.h>

void my_strncpy(char *dest, char *src, int n)
{
    int i;

    i = -1;
    if (!dest || !src || n <= 0)
        return ;
    while (++i < n && src[i])
        dest[i] = src[i];
    dest[i] = 0;
}

char *my_strndup(char *str, int n)
{
    char *tmp;

    if (!str || n <= 0)
        return (NULL);
    if (!(tmp = calloc(n + 2, sizeof(char))))
        return (NULL);
    my_strncpy(tmp, str, n);
    return (tmp);
}
