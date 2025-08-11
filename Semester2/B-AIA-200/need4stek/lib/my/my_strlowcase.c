/*
** EPITECH PROJECT, 2021
** my_strlowcase
** File description:
** none
*/

char *my_strlowcase(char *str)
{
    int i = 0;
    int offset = 32;
    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] += offset;
        }
        i++;
    }
    return str;
}
