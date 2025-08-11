/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdio.h>
#include <stdlib.h>
#include "parser.h"
#include "tokenizer.h"

extern const char *token_tab[T_NBR + 1];

int lex_error(int tk1, int flag, int tk2)
{
    static const char *ab_tab[2] = {"before", "after"};

    if (tk2 == T_EOL && flag == AFTER)
        return (lex_error(tk1, flag, ++tk2));
    fprintf(stderr, "Syntax Error : unexpected token `%s' %s `%s'\n",
    token_tab[tk1], ab_tab[flag], token_tab[tk2]);
    return (FAILURE);
}
