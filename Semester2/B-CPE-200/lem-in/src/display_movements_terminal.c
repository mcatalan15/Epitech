/*
** EPITECH PROJECT, 2022
** display_movements_terminal.c
** File description:
** calculates the laps the ants will take
*/

#include "lemin.h"
#include "structs.h"

static tunnel_t *get_node(int laps, int ant, int nb_paths, path_t *paths)
{
    tunnel_t *node = NULL;
    int index_in_path = 0;

    index_in_path = laps - (ant / nb_paths + 1);
    if (index_in_path < 0 || index_in_path >= paths[ant % nb_paths].len)
        return (NULL);
    node = paths[ant % nb_paths].path[index_in_path];
    return (node);
}

static void display_ant(tunnel_t *node, int ant, int *nb_in_end, int *is_lap)
{
    if (!node)
        return;
    if (node->type != START)
        my_printf("P%d-%s ", ant + 1, node->name);
    if (node->type == END)
        (*nb_in_end)++;
    *is_lap = *is_lap ? 1 : (node->type != START);
}

void display_movements_terminal(path_t *paths, int *ants_per_path, int ants)
{
    int nb_paths = 0;
    int ants_in_end = 0;
    tunnel_t *node = NULL;

    for (; ants_per_path[nb_paths] > 0; nb_paths++);
    for (int laps = 0, is_lap = 0; ants_in_end < ants; laps++, is_lap = 0) {
        for (int ant = 0; ant < ants; ant++) {
            node = get_node(laps, ant, nb_paths, paths);
            display_ant(node, ant, &ants_in_end, &is_lap);
        }
        if (is_lap)
            write(1, "\n", 1);
    }
}