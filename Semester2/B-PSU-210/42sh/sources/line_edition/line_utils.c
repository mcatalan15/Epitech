/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <unistd.h>
#include "edit.h"

void clear_and_display(t_line *line)
{
    int i;

    i = -2;
    CAP("sc");
    CAP("dl");
    while (++i < (line->line_len + line->sh->p_size))
        CAP("le");
    write(1, line->sh->prompt, line->sh->p_size);
    i = -1;
    while (line->line[++i])
        write(1, line->line[i] == '\t' ? " " : &(line->line[i]), 1);
    CAP("rc");
}

void replace_cursor(int oldpos, int newpos)
{
    int delta;

    delta = oldpos - newpos;
    while (delta < 0)
        {
            CAP("nd");
            ++delta;
        }
    while (delta > 0)
        {
            CAP("le");
            --delta;
        }
}
