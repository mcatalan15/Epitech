/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdlib.h>

int my_strlen(const char *str)
{
    int i;

    i = -1;
    if (!str)
        return (0);
    while (str[++i]);
    return (i);
}

void my_strcpy(char *dest, char *src)
{
    int i;

    i = -1;
    if (!dest || !src)
        return ;
    while (src[++i])
        dest[i] = src[i];
    if (i != 0)
        dest[i] = '\0';
}

char *my_strdup(char *str)
{
    char *newstr;

    newstr = calloc((my_strlen(str) + 1), sizeof(char));
    if (newstr)
        my_strcpy(newstr, str);
    return (newstr);
}

void my_strcat(char *dest, char *src)
{
    int i;
    int len;

    if (!src)
        return ;
    i = -1;
    len = my_strlen(dest);
    while (src[++i])
        dest[i + len] = src[i];
    dest[i + len] = 0;
}
