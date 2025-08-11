/*
** EPITECH PROJECT, 2021
** my_char_isalpha.c
** File description:
** x
*/

int my_char_isalpha(char str)
{

    if ( str < 65 || str > 90 || str < 97 || str > 122)
    return (0);
    else
        return (1);
}
