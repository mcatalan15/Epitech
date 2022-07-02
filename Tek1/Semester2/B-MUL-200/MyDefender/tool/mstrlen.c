/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** mstrlen
*/

int mstrlen(char *str)
{
    int size = 0;

    for ( ; str[size] != '\0' ; size += 1);
    return (size);
}
