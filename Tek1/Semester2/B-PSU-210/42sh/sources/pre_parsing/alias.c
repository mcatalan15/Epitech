/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdio.h>
#include <stdlib.h>
#include "sh.h"
#include "parser.h"

char **is_an_alias(char *str, t_shell *sh)
{
    t_alias *tmp;

    tmp = sh->alias;
    while ((tmp = tmp->next) != sh->alias)
        if (!my_strcmp(tmp->name, str))
            return (&tmp->cmd[2]);
    return (NULL);
}

void add_alias(t_shell *sh, char **stock)
{
    t_alias *newelem;

    if (!stock || !stock[1] || !stock[2])
        return ;
    if (!(newelem = calloc(1, sizeof(t_alias))))
        return ;
    newelem->name = stock[1];
    newelem->cmd = stock;
    newelem->prev = sh->alias->prev;
    newelem->next = sh->alias;
    sh->alias->prev->next = newelem;
    sh->alias->prev = newelem;
    return ;
}
