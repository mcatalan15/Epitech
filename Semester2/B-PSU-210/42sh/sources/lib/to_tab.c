/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdlib.h>
#include "sh.h"

char **to_tab(char *s, int cpt, char sep)
{
    int i = -1;
    int j;
    int len;
    char **tab;

    while ((s[++i] == sep || s[i] == '\t'));
    len = i - 1 ;
    while ((s[++len] != sep && s[len] != '\t' && s[len]));
    j = len - 1;
    while ((s[++j] == sep || s[j] == '\t'));
    tab = (s[j] == '\0' ? calloc((cpt + 10), sizeof(char *)) : NULL);
    if (s[j] != '\0')
        tab = to_tab(&s[len], cpt + 1, sep);
    if (!tab || !(tab[cpt] = calloc(((len - i) + 10), sizeof(char))))
        return (NULL);
    j = 0;
    while (i < len && (tab[cpt][j++] = s[i++]));
    return (tab);
}
