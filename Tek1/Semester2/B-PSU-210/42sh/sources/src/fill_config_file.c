/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "sh.h"
#include "parser.h"

void hist_limit(t_shell *sh, char **stock)
{
    int tmp;

    if (!stock)
        return ;
    if ((tmp = my_atoi(stock[1])))
        sh->hist_limit = tmp;
}

void hist_ignore(t_shell *sh, char **stock)
{
    if (!stock || !stock[1])
        return ;
    sh->hist_ign = to_tab(stock[1], 0, ':');
}

void add_info(t_shell *sh, char *str)
{
    static char *conf_tab[3] = {"HIST_LIMIT", "HIST_IGNORE", "alias"};
    static const t_conf	conf_fct[3] = {hist_limit, hist_ignore, add_alias};
    int i = -1;
    char **stock;

    if (!(stock = to_tab(str, 0, ' ')))
        return ;
    while (++i != 3)
        if (!my_strcmp(stock[0], conf_tab[i])) {
            conf_fct[i](sh, stock);
            break ;
        }
    if (i != 2)
        double_free (&stock);
    XFREE(str);
}
