/*
** EPITECH PROJECT, 2022
** lemin.c
** File description:
** Lemin principal function
*/

#include "lemin.h"
#include "structs.h"

int lemin(char **av)
{
    tunnel_t **tunnel_s = 0;
    path_t *paths = NULL;
    char **tunnels = NULL;
    int ants = 0;

    tunnel_s = construct_anthill(av[1], &ants, &tunnels);
    if (!tunnel_s || error_management(tunnel_s))
        return (84);
    paths = shortest_paths(tunnel_s);
    if (!paths || !get_new_path(tunnel_s, 0, NULL).path)
        return (84);
    display_info(ants, tunnel_s, tunnels);
    if (display_ants_movements(paths, ants) == 84) {
        free_paths(paths);
        return (84);
    }
    free_paths(paths);
    return (0);
}