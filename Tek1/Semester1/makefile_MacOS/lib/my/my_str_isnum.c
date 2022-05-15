/*
** EPITECH PROJECT, 2021
** my_str_isnum.c
** File description:
** x
*/

int my_str_isnum (char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if ( str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }if (i == 0)
        return (0);
    else
        return (1);
}