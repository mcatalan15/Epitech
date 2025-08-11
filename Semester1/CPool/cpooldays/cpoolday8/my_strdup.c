/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** A function that allocates memory and copies the string
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *y;
    int x = 0;
    int n = 0;

    while (src[x] != '\0') {
        x++;
    }
    y = malloc(sizeof(char) * (x + 1));
    
    while (n < x) {
        y[n] = src[n];
        n++;
    }
    y[n] = '\0';
    return(y);
}
