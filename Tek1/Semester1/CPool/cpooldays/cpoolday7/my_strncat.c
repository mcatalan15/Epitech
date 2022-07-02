/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** function strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int x = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (x != nb) {
        dest[i] = src[x];
        i++;
        x++;
    }
    dest[i] = '\0';
    return (dest);
}
