/*
** EPITECH PROJECT, 2022
** No filename
** File description:
** No description
*/

#include "my.h"

void check_map(game_t *game)
{
    if (game->width > 80) {
        my_printf("Error: Too many columns");
        exit(84);
    }
    if (game->height > 16) {
        my_printf("Error: Too many rows");
        exit(84);
    }
    if (game->width * game->height < 20) {
        my_printf("Error: Too few cells");
        exit(84);
    }
}

void check_players(game_t *game, players_t *players)
{
    if (players->p1 == players->p2) {
        my_printf("Error: Same players characters");
        exit(84);
    }
    if (players->p1 == game->referee) {
        my_printf("Error: Same player as referee");
        exit(84);
    }
    if (players->p2 == game->referee) {
        my_printf("Error: Same player as referee");
        exit(84);
    }
}
