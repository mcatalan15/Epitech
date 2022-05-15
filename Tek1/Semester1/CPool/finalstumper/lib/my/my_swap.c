/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** x
*/

#include <unistd.h>

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int var;

    var = *a;
    *a = *b;
    *b = var;
}
