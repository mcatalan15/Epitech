/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** none
*/

#include "file.h"
#include <stdlib.h>

char *my_strcat(char const *a, char const *b)
{
    int i = 0;
    int j = 0;
    char *res = malloc(sizeof(char) * (my_strlen(a) + my_strlen(b) + 1));
    while (a[i] != '\0') {
        res[i] = a[i];
        i++;
    }
    while (b[j] != '\0') {
        res[i + j] = b[j];
        j++;
    }
    res[i + j] = '\0';
    return (res);
}
