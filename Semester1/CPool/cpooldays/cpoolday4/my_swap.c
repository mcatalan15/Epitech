/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** Swap the content of two integers
*/

void my_swap (int *a, int *b)
{
    int i = 0;

    i = *a;
    *a = *b;
    *b = i;
}
