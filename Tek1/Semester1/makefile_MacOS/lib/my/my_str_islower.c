/*
** EPITECH PROJECT, 2021
** my_str_islower.c
** File description:
** x
*/

int my_str_islower (char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if ( str[i] < 'a' || str[i] > 'z')
            return (0);
        i++;
    } if (i == 0)
        return (0);
    else
        return (1);
}
