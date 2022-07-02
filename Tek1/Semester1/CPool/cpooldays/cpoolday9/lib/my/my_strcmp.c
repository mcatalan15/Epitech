/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** something
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i] || s2[i] != s1[i]) {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}
