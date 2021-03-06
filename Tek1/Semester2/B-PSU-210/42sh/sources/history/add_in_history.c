/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "edit.h"
#include "sh.h"

static t_history *init_root_history(void)
{
    t_history *root;

    if (!(root = calloc(1, sizeof(t_history))))
        return (NULL);
    root->prev = root;
    root->next = root;
    return (root);
}

static int add_elem_in_history(t_history *elem)
{
    t_history *newelem;

    if (!(newelem = calloc(1, sizeof(t_history))))
        return (FAILURE);
    newelem->prev = elem->prev;
    newelem->next = elem;
    elem->prev->next = newelem;
    elem->prev = newelem;
    return (SUCCESS);
}

static int not_ignored(t_line *line)
{
    int i = -1;

    while (line->sh->hist_ign && line->sh->hist_ign[++i])
        if (!my_strcmp(line->line, line->sh->hist_ign[i]))
            return (0);
    return (1);
}

int add_in_history_dll(t_line *line)
{
    if (my_strcmp(line->line, line->sh->history->prev->data)
    && not_ignored(line))
        if (add_elem_in_history(line->sh->history) != FAILURE) {
            line->sh->history->prev->len = line->line_len;
            if (!(line->sh->history->prev->data = my_strdup(line->line)))
                return (FAILURE);
        }
    return (SUCCESS);
}

int init_history(t_line *line)
{
    int fd;
    char *str;
    int i = -1;

    if (!(line->sh->history = init_root_history()))
        return (FAILURE);
    if ((fd = open("./.history", (O_RDWR | O_CREAT | O_APPEND), 0777)) < 0)
        return (FAILURE);
    while ((str = gnl(fd)) && ++i < 1000)
        if (add_elem_in_history(line->sh->history) == FAILURE)
            return (FAILURE);
        else {
            line->sh->history->prev->data = str;
            line->sh->history->prev->len = my_strlen(str);
        }
    close(fd);
    return (SUCCESS);
}
