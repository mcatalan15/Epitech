/*
** EPITECH PROJECT, 2021
** result
** File description:
** x
*/

#include <stdio.h>

void my_putchar(char c);

int my_put_nbr(int nb);

int results(char *buff)
{
    int x = 0;
    int columns = 0;
    int i = 0;
    int all = 0;
    int rows = 0;

    while (buff[x] != '\n') {
        x++;
    }
    columns = x;
    my_put_nbr(columns);

    while (buff[i] != '\0') {
        i++;
    }
    all = i;
    rows = all / (columns + 1);
    my_putchar(' ');
    my_put_nbr(rows);
    my_putchar('\n');
    return rows;
}
