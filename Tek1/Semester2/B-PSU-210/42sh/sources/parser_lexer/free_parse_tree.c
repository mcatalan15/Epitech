/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdlib.h>
#include "parser.h"
#include "sh.h"

static void free_red(t_red **red)
{
    XFREE(red[0]);
    XFREE(red[1]);
    XFREE(red[2]);
}

static void free_cmd(t_cmd *root)
{
    t_cmd *tmp;
    t_cmd *save;

    if (root) {
        save = root->prev;
        tmp = root;
        while ((tmp = tmp->next) != root) {
            free_red(tmp->red);
            XFREE(tmp->prev->path);
            XFREE(tmp->prev->stock);
            XFREE(tmp->prev);
        }
            XFREE(save->path);
            XFREE(save->stock);
            XFREE(save);
        }
}

void *free_tree(t_parse_tree *root)
{
    t_parse_tree *tmp = root;
    t_parse_tree *save = root->prev;

    while ((tmp = tmp->next) != root) {
        if (tmp->prev->cmd)
            free_cmd(tmp->prev->cmd);
        XFREE(tmp->prev);
        }
    free_cmd(save->cmd);
    XFREE(save);
    return (NULL);
}

