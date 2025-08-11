/*
** EPITECH PROJECT, 2022
** my_strjump
** File description:
** jumps to a certain point in a string
*/

int my_strjump(char *str, char c)
{
    int i = 0;

    if (!str)
        return (i);
    for (; str[i] && str[i] != c; i++);
    return (i);
}