/*
** EPITECH PROJECT, 2022
** No filename
** File description:
** No description
*/

#include "my.h"

int get_row(char **map, int height, int selection)
{
    int i = height - 1;
    while (i > 0) {
        if (map[i][selection] == '.') {
            return (i);
        }
        i--;
    }
    if (map[i][selection] != '.') {
        my_printf("Error: the column is full\n");
        return (-1);
    }
    return (i);
}

int check_board(game_t *game)
{
    for (int i = 0; i < game->height; i++) {
        for (int j = 0; j < game->width; j++) {
            if (game->map[i][j] == '.') {
                return (0);
            }
        }
    }
    return (1);
}

char *read_input(void)
{
    char c;
    int res;
    int i = 0;
    char *buff = malloc(sizeof(char) * 2048);
    while ((res = read(0, &c, 1)) > 0 && c != '\n') {
        buff[i] = c;
        i++;
    }
    buff[i] = '\0';
    if (res <= 0) {
        free(buff);
        return NULL;
    }
    return buff;
}
