/*
** EPITECH PROJECT, 2022
** create_path.c
** File description:
** more linking
*/

#include "lemin.h"
#include "structs.h"

path_t create_path_from_current(grid_node_t *current)
{
    path_t path = {0, 0};

    path.len = current->distance + 1;
    path.path = malloc(sizeof(tunnel_t *) * path.len);

    for (int i = path.len - 1; i >= 0; i--) {
        path.path[i] = current->data;
        current = current->parent;
    }
    return path;
}