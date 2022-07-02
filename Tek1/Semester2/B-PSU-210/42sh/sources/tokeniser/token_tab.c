/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include "tokenizer.h"

const char *token_tab[T_NBR + 1] =
    {"&>", "`",
    ">&", ";",
    "||", "|",
    "&&", "&",
    ">>", ">",
    "<<", "<",
    "DATA",
    "END_OF_LINE",
    "ROOT"};
