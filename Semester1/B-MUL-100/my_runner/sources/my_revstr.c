/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"
#include <stdlib.h>

int my_strlen2(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    i--;
    return (i);
}

char *my_revstr(char *str)
{
    char *dup = malloc(sizeof(char) * my_strlen2(str) + 1);
    int j = my_strlen2(str);
    int i = 0;

    while (str[i] != '\0')
    {
        dup[i] = str[j];
        i++;
        j--;
    }
    dup[i] = '\0';
    return (dup);
}
