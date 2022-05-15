/*
** EPITECH PROJECT, 2021
** rows
** File description:
** x
*/

#include <stdio.h>

int colums(char *buff);

int rows(char *buff, int columns)
{
    int all = 0;
    int i = 0;
    int rows = 0;

    while (buff[i] != '\0') {
        i++;
    }
    all = i;
    rows = all / (columns + 1);
    return rows;
}
