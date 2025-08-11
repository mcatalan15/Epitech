/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include "edit.h"

void move_back_word(t_line *line)
{
    while (line->pos > 0 && (line->line[line->pos - 1] == ' ' ||
    line->line[line->pos - 1] == '\t')) {
        --line->pos;
        CAP("le");
    }
    while (line->pos > 0 && (line->line[line->pos - 1] != ' ' &&
    line->line[line->pos - 1] != '\t')) {
        --(line->pos);
        CAP("le");
    }
}

void move_fwd_word(t_line *line)
{
    while (line->pos < line->line_len && (line->line[line->pos + 1] != ' ' &&
    line->line[line->pos + 1] != '\t')) {
        ++(line->pos);
        CAP("nd");
    }
    while (line->pos < line->line_len && (line->line[line->pos + 1] == ' ' ||
    line->line[line->pos + 1] == '\t')) {
        ++line->pos;
        CAP("nd");
    }
}

void delete_word(t_line *line)
{
    while (line->pos > 0 && (line->line[line->pos - 1] == ' ' ||
    line->line[line->pos - 1] == '\t')) {
        --line->pos;
        line->line[line->pos] = 0;
        CAP("le");
    }
    while (line->pos > 0 && (line->line[line->pos - 1] != ' ' &&
    line->line[line->pos - 1] != '\t')) {
        --(line->pos);
        line->line[line->pos] = 0;
        CAP("le");
    }
    line->line_len = line->pos;
    clear_and_display(line);
}

