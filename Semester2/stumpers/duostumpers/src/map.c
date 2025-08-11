/*
** EPITECH PROJECT, 2022
** No filename
** File description:
** No description
*/

#include "my.h"
#include <stdio.h>

void print_borders(int width)
{
    for (int i = 0; i < width + 2; i++) {
        my_printf("+");
    }
    my_printf("\n");
}

void print_map(game_t *game)
{
    print_borders(game->width);
    int i = 0;
    while (game->map[i] != NULL) {
        my_printf("|%s|\n", game->map[i]);
        i++;
    }
    print_borders(game->width);
}

void fill_map(char **map, int width, int height)
{
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            map[i][j] = '.';
        }
        map[i][width] = '\0';
    }
}
