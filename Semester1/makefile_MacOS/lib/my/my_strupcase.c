/*
** EPITECH PROJECT, 2021
** my_strupcase
** File description:
** Changes the letters of a string into upercase letters
*/

char *my_strupcase(char *str)
{
    int i = 0;
    int n = 0;

    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122) {
            n = str[i];
            n -= 32;
            str[i] = n;
            n = 0;
        }
        i++;
    }
    return (str);
}

