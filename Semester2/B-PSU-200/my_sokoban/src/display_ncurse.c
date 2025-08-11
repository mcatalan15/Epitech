/*
** EPITECH PROJECT, 2022
** display_ncurse.c
** File description:
** ...
*/

#include "my.h"

void init_screen(int *row, int *col, t_moment *m)
{
    getmaxyx(stdscr, *row, *col);
    screen_small(m, row, col);
}

void play_game(t_moment *m)
{
    int row;
    int col;
    m->ch = 2;

    clear();
    init_screen(&row, &col, m);
    add_o(m);
    for (int i = 0; i < m->lines_nbr; i += 1)
        mvprintw((row / 2 - m->lines_nbr / 2) + i,
        (col - my_strlen(m->str[i])) / 2, "%s", m->str[i]);
    refresh();
    while (m->ch != KEY_F(1)) {
        check_end_game(m);
        m->ch = getch();
        manage_input(m);
    }
}
