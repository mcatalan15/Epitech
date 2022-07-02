/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdlib.h>

static char **parsing(char **tab, char *str, int nb, char c)
{
    int i = 0;
    int j = 0;
    int k;

    while (j < nb) {
        k = 0;
        while (str && str[i] != '\0' && str[i] != c) {
            tab[j][k] = str[i];
            k++;
            i++;
        }
        tab[j][k] = '/';
        tab[j][k + 1] = '\0';
        j++;
        i++;
    }
    tab[j] = NULL;
    return (tab);
}

static int count_len(char *str, char c, int flag)
{
    static int par;
    int i = 0;

    if (flag == 0)
        par = 0;
    while (str && str[par] != '\0' && str[par] != c) {
        i++;
        par++;
    }
    par++;
    return (i);
}

static int count_word(char *str, char c)
{
    int i = 0;
    int count = 1;

    while (str && str[i] != '\0') {
        if (str[i] == c)
            count++;
        i++;
    }
    return (count);
}

char **get_paths(char *str, char c)
{
    int i = 0;
    int nb = count_word(str, c);
    char **tab;

    if (!(tab = calloc((nb + 1), sizeof(str))))
        return (NULL);
    while (i < nb) {
        if (!(tab[i] = calloc(count_len(str, c, i) + 2, sizeof(char))))
            return (NULL);
        i++;
    }
    parsing(tab, str, nb, c);
    return (tab);
}

