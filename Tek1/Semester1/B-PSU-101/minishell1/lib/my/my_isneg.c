/*
** EPITECH PROJECT, 2021
** my_isneg
** File description:
** displays either N ifparameter is negative or P, if positive or null
*/

#include "my.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return (0);
}
