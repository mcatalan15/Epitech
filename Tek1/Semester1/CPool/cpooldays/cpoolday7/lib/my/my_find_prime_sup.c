/*
** EPITECH PROJECT, 2021
** my_find_prime_sup.c
** File description:
** Write a function that returns the smallest prime
*/

#include <limits.h>

int my_find_prime_sup(int nb)
{
    int i = nb;

    while ( i < INT_MAX && i % 2 == 0) {
        i++;
    }
    return (i);
}
