/*
** EPITECH PROJECT, 2021
** my_strln
** File description:
** counts the number of characters found in the string passed
*/

void my_putchar(char c);

int my_strlen(char const *str)
{
    int i = 0;

    while (str [i] != '\0') {
        i++;
    }
    return (i);
}
