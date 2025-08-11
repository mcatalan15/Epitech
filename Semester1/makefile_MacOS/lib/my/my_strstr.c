
/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** something
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int n = 0;

    while ((str[i] != '\0' || to_find[i] != '\0') || str[i] != to_find[i]) {
        i++;
    }
    while (to_find[i] != '\0') {
        if (str[i] != to_find[i]) {
            return (0);
        }
        i++;
    }
    while (to_find[n] != '\0') {
        str[n] = to_find[n];
        n++;
    }
    str[n] = '\0';
    return (str);
}
