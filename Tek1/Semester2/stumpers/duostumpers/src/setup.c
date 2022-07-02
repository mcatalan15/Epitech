/*
** EPITECH PROJECT, 2022
** No filename
** File description:
** No description
*/

#include "my.h"

void setup_map(game_t *game, char **argv)
{
    game->referee = get_player_char(argv, "-a", '#');
    game->width = get_size(argv, "-w", 7);
    game->height = get_size(argv, "-h", 6);
    game->map = malloc(sizeof(char *) * (game->height + 1));
    for (int i = 0; i < game->height; i++) {
        game->map[i] = malloc(sizeof(char) * (game->width + 1));
    }
    game->map[game->height] = NULL;
    fill_map(game->map, game->width, game->height);
}

void setup_players(players_t *players, char **argv)
{
    players->p1 = get_player_char(argv, "-p1", 'X');
    players->p2 = get_player_char(argv, "-p2", 'O');   
}
