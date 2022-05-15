/*
** EPITECH PROJECT, 2022
** end_game.c
** File description:
** ...
*/

#include "my.h"

int not_empity(char what)
{
    if (what == '#' || what == 'X')
        return (1);
    return (0);
}

int is_blocked(char *str[], int x, int y, list *entry)
{
    elent *el = entry->first;

    for (; el != NULL; el = el->next) {
        if (str[el->y][el->x] == ' ') {
            str[el->y][el->x] = 'O';
        }
    }
    if (not_empity(str[y][x + 1]) || not_empity(str[y][x - 1])) {
        if (not_empity(str[y + 1][x]) || not_empity(str[y - 1][x]))
            return (1);
    }
    if (not_empity(str[y - 1][x]) || not_empity(str[y + 1][x])) {
        if (not_empity(str[y][x + 1] || not_empity(str[y][x - 1])))
            return (1);
    }
    return (0);
}

void check_map_blocked(list *o_pos, char *str[], int lines_nbr)
{
    int i = 0;
    int j = 0;

    for (; j < lines_nbr; i += 1) {
        if (str[j][i] == '\n') {
            j += 1;
            i = -1;
        } else if (str[j][i] == 'X' && !is_blocked(str, i, j, o_pos))
            return;
    }
    endwin();
    exit(1);
}

void check_win_game(char *str[], list *o_pos)
{
    elent *el = o_pos->first;

    for (;el != NULL; el = el->next) {
        if (str[el->y][el->x] != 'X')
            return;
    }
    endwin();
    my_putstr("You won!\n");
    exit(0);
}

void check_end_game(t_moment *m)
{
    check_win_game(m->str, m->o_pos);
    check_map_blocked(m->o_pos, m->str, m->lines_nbr);
}
