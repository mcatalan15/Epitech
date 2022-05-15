/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** x
*/

void my_putchar(char c);

void my_putstr(char *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i != n) {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
