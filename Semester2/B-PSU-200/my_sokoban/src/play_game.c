/*
** EPITECH PROJECT, 2022
** play_game.c
** File description:
** ...
*/

#include "my.h"
#include <ncurses.h>
#include <stdlib.h>

void get_player_pos(int *i, int *j, t_moment *m)
{
    *i = 0;
    *j = 0;
    for (; *j < m->lines_nbr; *i += 1) {
        if (m->str[*j][*i] == 'P')
            return;
        else if (m->str[*j][*i] == '\n') {
            *j += 1;
            *i = -1;
        }
    }
    endwin();
    exit(84);
}

void manage_input(t_moment *m)
{
    switch (m->ch) {
    case 65:
        move_p_up(m);
        break;
    case 66:
        move_p_down(m);
        break;
    case 67:
        move_p_right(m);
        break;
    case 68:
        move_p_left(m);
        break;
    case 32:
        clear();
        main(2, m->av);
    default:
        break;
    }
}

void screen_small(t_moment *m, int *row, int *col)
{
    char *msg[4] = {"Your", "Screen", "Is too", "Small"};

    if (my_strlen(m->str[0]) > *col || m->lines_nbr > *row) {
        int i = 0;
        while ( i < 4) {
            mvprintw((*row / 2 - 4 / 2) + i,
            (*col - my_strlen(msg[i])) / 2, "%s", msg[i]);
            i += 1;
        }
    }
}

void add_o(t_moment *m)
{
    elent *el = m->o_pos->first;

    for (; el != NULL; el = el->next) {
        if (m->str[el->y][el->x] == ' ')
            m->str[el->y][el->x] = 'O';
    }
}
