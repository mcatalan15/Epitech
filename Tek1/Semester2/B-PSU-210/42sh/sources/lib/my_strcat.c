/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <string.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "parser.h"
#include "sh.h"

char *my_strjoint(char *s1, char *s2)
{
    char *new;
    int i = 0;
    int j = 0;
    int len = my_strlen(s1) + my_strlen(s2);

    if (!(new = calloc((len + 1), sizeof(char))))
        return (NULL);
    while (s1[i]) {
        new[i] = s1[i];
        i++;
    }
    while (s2[j]) {
        new[i + j] = s2[j];
        j++;
    }
    return (new);
}
