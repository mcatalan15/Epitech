/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** Displays a count of the characters of a string
*/

int my_strlen (char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
