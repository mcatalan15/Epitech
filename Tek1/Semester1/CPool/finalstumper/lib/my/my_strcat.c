/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** x
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int longitud = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0') {
        dest[longitud] = src[i];
        i++;
        longitud++;
    }
    return (dest);
}
