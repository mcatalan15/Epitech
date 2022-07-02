/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** something
*/

int my_strncmp(char *s1, char *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] && s2[i] && i != n) {
        i += 1;
    }
    if (i != n && s1[i] != s2[i])
        return -1;
    else
        return 0;
}