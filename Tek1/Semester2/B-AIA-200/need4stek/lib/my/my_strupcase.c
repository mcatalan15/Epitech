/*
** EPITECH PROJECT, 2021
** my_strupcase
** File description:
** none
*/

char *my_strupcase(char *str)
{
    int i = 0;
    int offset = 32;
    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] -= offset;
        }
        i++;
    }
    return str;
}
