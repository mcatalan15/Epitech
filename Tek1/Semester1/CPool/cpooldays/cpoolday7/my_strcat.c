/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** function strcat
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int x = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[x] != '\0') {
        dest[i] = src[x];
        i++;
        x++;
    }
    dest[i] = '\0';
    return (dest);
}
