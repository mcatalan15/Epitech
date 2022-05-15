/*
** EPITECH PROJECT, 2022
** display_ncurse.c
** File description:
** ...
*/

#ifndef MY_H

    typedef struct elent elent;
    typedef struct list list;

    struct elent
    {
        int x;
        int y;
        elent *next;
    };

    struct list
    {
        elent *first;
    };

    typedef struct s_moment
    {
        char **str;
        int lines_nbr;
        int ch;
        char **av;
        list *o_pos;
        int p_x;
        int p_y;
    } t_moment;

    #define MY_H
    #include <ncurses.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdio.h>
    #include <stdlib.h>

    list *get_o_pos(t_moment *m);
    void my_putstr(char *);
    int my_strlen(char *);
    char **get_map(char *path, t_moment *m);
    void move_p(t_moment *m);
    int main(int ac, char *av[]);
    void manage_input(t_moment *m);
    void play_game(t_moment *m);
    void check_end_game(t_moment *m);
    void check_map_blocked(list *o_pos, char *str[], int lines_nbr);
    void init_screen(int *row, int *col, t_moment *m);
    void screen_small(t_moment *m, int *row, int *col);
    void add_o(t_moment *m);
    void move_p2(int m_x, int m_y, t_moment *m);
    void move_p_up(t_moment *m);
    void move_p_down(t_moment *m);
    void move_p_right(t_moment *m);
    void move_p_left(t_moment *m);
    void get_player_pos(int *i, int *j, t_moment *m);
#endif