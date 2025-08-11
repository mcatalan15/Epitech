/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** function
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int n = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (n != nb) {
        dest[i] = src[n];
        i++;
        n++;
    }
    dest[i] = '\0';
    return (dest);
}
