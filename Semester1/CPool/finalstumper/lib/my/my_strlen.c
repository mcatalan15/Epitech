/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** x
*/
#include <unistd.h>

void my_putchar(char c);

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
