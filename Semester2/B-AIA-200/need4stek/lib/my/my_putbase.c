/*
** EPITECH PROJECT, 2021
** my_putbase
** File description:
** print integer in a given base
*/

#include "file.h"

void my_putbase(unsigned long long int nb, char *base)
{
    int base_len = my_strlen(base);
    if (nb > base_len - 1) {
        my_putbase(nb / base_len, base);
    }
    my_putchar(base[nb % base_len]);
}
