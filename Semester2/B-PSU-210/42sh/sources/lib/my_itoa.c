/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdlib.h>

char *my_itoa(int nbr)
{
    char *buffer;
    int i = 0;
    int power = 10;

    while ((nbr / power) > 0) {
        power = power * 10;
        i++;
    }
    if (!(buffer = calloc (10, sizeof(char))))
        return (NULL);
    power = i;
    buffer[i + 1] = '\0';
    while (i >= 0) {
        buffer[i] =    (nbr - ((nbr/10) * 10) + '0');
        i--;
        nbr = nbr / 10;
    }
    return (buffer);
}
