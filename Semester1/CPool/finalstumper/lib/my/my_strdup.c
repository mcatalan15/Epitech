/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** x
*/
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *str;
    int i = 0;

    str = malloc(sizeof(char) * (my_strlen(src) + 1));

    while (i < my_strlen(src) + 1) {
        str[i] = src[i];
        i++;
    }
    return (str);
    free(str);
}
