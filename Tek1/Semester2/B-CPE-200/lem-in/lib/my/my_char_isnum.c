/*
** EPITECH PROJECT, 2021
** my_str_isnum
** File description:
** no description
*/

int my_char_isnum(char c)
{
    if (c < 48 || c > 57) {
        return 0;
    }
    return 1;
}
