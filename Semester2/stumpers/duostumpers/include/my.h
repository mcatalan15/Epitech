/*
** EPITECH PROJECT, 2021
** utils.h
** File description:
** utils_lib h file
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>

typedef struct game_s {
    char **map;
    int width;
    int height;
    char referee;
} game_t;

typedef struct players_s {
    char p1;
    char p2;
} players_t;

int my_printf(const char *, ...);
int my_getnbr(char *);
int my_strcmp(char const *, char const *);

void print_map(game_t *);
void fill_map(char **, int , int);
int get_size(char **, char *, int);
char get_player_char(char **, char *, char);
int get_row(char **, int, int);
void check_win(game_t *, char);
void check_map(game_t *);
void check_players(game_t *, players_t *);
void setup_map(game_t *, char **);
void setup_players(players_t *, char **);
int check_board(game_t *);
char *read_input(void);

#endif
