/*
** EPITECH PROJECT, 2021
** my_strlowcase
** File description:
** Changes the letters of a string into lowercase letters
*/

char *my_strlowcase(char *str)
{
    int i = 0;
    int n = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {
            n = str[i];
            n += 32;
            str[i] = n;
            n = 0;
        }
        i++;
    }
    return (str);
}
