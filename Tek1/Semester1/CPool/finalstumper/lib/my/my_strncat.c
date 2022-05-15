/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** x
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int longitud = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0' && i < nb) {
        dest[longitud] = src[i];
        i++;
        longitud++;
    }
    return (dest);
}
