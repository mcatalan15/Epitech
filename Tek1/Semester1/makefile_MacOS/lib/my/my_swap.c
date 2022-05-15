/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** a function that chages the contentof two integers
*/

void my_putchar (char c);

void my_swap (int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

