/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdlib.h>
#include "edit.h"
#include "sh.h"

int safecpy(t_line *line, char *str)
{
    int i = -1;

    while (str[++i]) {
        if (i >= (BUFF_LINE * line->realloc_cpt))
            if (line_realloc(line) == FAILURE)
                return (FAILURE);
        line->line[i] = str[i];
    }
    line->line[i] = 0;
    return (SUCCESS);
}

void back_to_the_future(t_line *line, char *new_line, int new_len)
{
    if (safecpy(line, new_line) == FAILURE)
        return ;
    replace_cursor(line->pos, new_len);
    line->pos = new_len;
    line->line_len = new_len;
    clear_and_display(line);
}

void go_next(t_line *line)
{
    if (!line->sh->curr_pos || line->sh->curr_pos == line->sh->history)
        return ;
    if (line->sh->curr_pos->next == line->sh->history)
        back_to_the_future(line, line->line_save, my_strlen(line->line_save));
    else
        back_to_the_future(line, line->sh->curr_pos->next->data,
        line->sh->curr_pos->next->len);
    line->sh->curr_pos = line->sh->curr_pos->next;
}

void go_prev(t_line *line)
{
    if (!line->sh->curr_pos) {
        if (!(line->line_save = calloc(BUFF_LINE, sizeof(char))))
            return ;
        line->sh->curr_pos = line->sh->history;
        my_strcpy(line->line_save, line->line);
    }
    if (line->sh->curr_pos->prev == line->sh->history)
        return ;
    line->sh->curr_pos = line->sh->curr_pos->prev;
    back_to_the_future(line, line->sh->curr_pos->data, line->sh->curr_pos->len);
}
