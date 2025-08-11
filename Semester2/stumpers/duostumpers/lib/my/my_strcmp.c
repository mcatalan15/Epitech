/*
** EPITECH PROJECT, 2021
** my_strcpy
** File description:
** none
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int res = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        res = s1[i] - s2[i];
        if (res != 0)
            return res;
        i++;
    }
    return res;
}
