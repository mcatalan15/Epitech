/*
** EPITECH PROJECT, 2022
** No filename
** File description:
** No description
*/

#include "my.h"

int check_win_horizontal(game_t *game, int i, int j, char player)
{
    int count = 0;
    for (int k = 0; k < 4 && (j + k) < game->width; k++) {
        if (game->map[i][j + k] == player) {
            count++;
        }
    }
    int check = count == 4;
    if (check) {
        for (int k = 0; k < 4 && (j + k) < game->width; k++) {
            game->map[i][j + k] = game->referee;
        }
    }
    return check;
}

int check_win_vertical(game_t *game, int i, int j, char player)
{
    int count = 0;
    for (int k = 0; k < 4 && (i + k) < game->height; k++) {
        if (game->map[i + k][j] == player) {
            count++;
        }
    }
    int check = count == 4;
    if (check) {
        for (int k = 0; k < 4 && (i + k) < game->height; k++) {
            game->map[i + k][j] = game->referee;
        }
    }
    return check;
}

int check_win_diagonal_right(game_t *game, int i, int j, char player)
{
    int count = 0;
    for (int k = 0; k < 4 && (i + k) < game->height 
    && (j + k) < game->width; k++) {
        if (game->map[i + k][j + k] == player) {
            count++;
        }
    }
    int check = count == 4;
    if (check) {
        for (int k = 0; k < 4 && (i + k) < game->height && (j + k)
            < game->width; k++) {
              game->map[i + k][j + k] = game->referee;
        }
    }
    return check;
}

int check_win_diagonal_left(game_t *game, int i, int j, char player)
{
    int count = 0;
    for (int k = 0; k < 4 && (i + k) < game->height && (j - k) >= 0; k++) {
        if (game->map[i + k][j - k] == player) {
            count++;
        }
    }
    int check = count == 4;
    if (check) {
        for (int k = 0; k < 4 && (i + k) < game->height && (j - k) >= 0; k++) {
            game->map[i + k][j - k] = game->referee;
        }
    }
    return check;
}

void check_win(game_t *game, char player)
{
    for (int i = 0; i < game->height; i++) {
        for (int j = 0; j < game->width; j++) {
            if (check_win_horizontal(game, i, j, player) == 1 ||
                check_win_vertical(game, i, j, player) == 1 ||
                check_win_diagonal_right(game, i, j, player) == 1 ||
                check_win_diagonal_left(game, i, j, player) == 1) {
                print_map(game);
                my_printf("Congrats, player %c won!\n", game->map[i][j]);
                exit(1);
            }
        }
    }
    print_map(game);
}
