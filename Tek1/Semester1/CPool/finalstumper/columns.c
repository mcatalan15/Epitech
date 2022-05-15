/*
** EPITECH PROJECT, 2021
** columns
** File description:
** x
*/

#include <stdio.h>

int columns(char *buff)
{
    int x = 0;
    int columns = 0;

    while (buff[x] != '\n') {
        x++;
    }
    columns = x;
    return columns;
}
