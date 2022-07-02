/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdio.h>

int speed_cmp(char *s, char *s2)
{
    return (*s == *s2 ? !(*s) ? 0 : speed_cmp(++(s), ++(s2)) : 1);
}

int speed_ncmp(char *s, char *s2, int i)
{
    return (*s == *s2 ? !(*s) || !(--i) ? 0 : speed_ncmp(++(s), ++(s2), i) : 1);
}

int my_strcmp(char *s1, char *s2)
{
    return (!s1 && !s2 ? 0 : !s1 || !s2 ? 1 : speed_cmp(s1, s2));
}

int my_strncmp(char *s1, char *s2, int i)
{
    return (!s1 && !s2 ? 0 : !s1 || !s2 ? 1 : speed_ncmp(s1, s2, i));
}
