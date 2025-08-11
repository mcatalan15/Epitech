/*
** EPITECH PROJECT, 2021
** my_strcpy
** File description:
** a script that chnages that copies one string into another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i != n)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
