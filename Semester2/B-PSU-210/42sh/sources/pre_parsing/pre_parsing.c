/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdlib.h>
#include "sh.h"

int pre_parsing(t_shell *sh)
{
    char **stock;
    int i;

    i = -1;
    sh->line->realloc_cpt = 0;
    sh->line->pos = 0;
    if (!(stock = to_tab(sh->line->line, 0, ' ')) || !(*stock[0]))
        return (FAILURE);
    while (stock[++i])
        if (parse_line(stock[i], sh) == FAILURE)
            return (FAILURE);
    if (sh->line->line_save)
        {
            XFREE(sh->line->line);
            sh->line->line = sh->line->line_save;
        }
    sh->line->line_save = NULL;
    double_free(&stock);
    return (SUCCESS);
}
