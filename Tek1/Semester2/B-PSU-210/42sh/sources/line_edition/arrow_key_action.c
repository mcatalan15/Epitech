/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include "edit.h"

extern const int key_tab[AK_NB];
extern const t_ak act_tab[AK_NB];

void move_left(t_line *line)
{
    if (line->pos <= 0)
        return ;
    CAP("le");
    line->pos--;
}

void move_right(t_line *line)
{
    if (line->pos >= line->line_len)
        return ;
    CAP("nd");
    line->pos++;
}

void clear_scr(t_line *line)
{
    int i = -1;

    CAP("cl");
    clear_and_display(line);
    while (++i < (6 + line->pos))
        CAP("nd");
}

void real_tab(t_line *line)
{
    line->key = '\t';
    add_char(line);
}

void do_key_actions(t_line *line)
{
    int i = -1;

    while (++i < AK_NB) {
        if (line->key == key_tab[i]) {
            act_tab[i](line);
            return ;
        }
    }
    if (i == AK_NB || VALID_CHAR(line->key))
        add_char(line);
}

