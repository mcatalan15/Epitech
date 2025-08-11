/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** ...
*/

#include "my.h"

void when_is_h(int ac, char *av[])
{
    if (ac < 2)
        exit(84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("USAGE\n	./my_sokoban map\nDESCRIPTION\n"
        "	map file representing the warehouse map, containing "
        "‘#’ for walls, \n		‘P’ for the player, ‘X’ "
        "for boxes and ‘O’ for storage locations.\n");
        exit(0);
    }
}

void check_on_border(t_moment *m)
{
    int x = my_strlen(m->str[0]);

    for (int i = 0; i < x; i++) {
        if (m->str[0][i] == 'X' || m->str[m->lines_nbr - 1][i] == 'X')
            exit(84);
    }
    for (int i = 0; i < m->lines_nbr; i++) {
        if (m->str[i][0] == 'X' || m->str[i][x] == 'X')
            exit(84);
    }
}

int main(int ac, char *av[])
{
    t_moment *m = malloc(sizeof(t_moment));
    m->lines_nbr = 0;

    when_is_h(ac, av);
    m->av = av;
    m->str = get_map(av[1], m);
    check_on_border(m);
    m->o_pos = get_o_pos(m);
    initscr();
    cbreak();
    noecho();
    curs_set(0);
    play_game(m);
    free(m->str);
    return (0);
}
