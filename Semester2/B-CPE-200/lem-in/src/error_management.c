/*
** EPITECH PROJECT, 2022
** error_managemnt.c
** File description:
** self explanatory
*/

#include "lemin.h"
#include "structs.h"

static int is_there_entrance_and_end(tunnel_t **tunnels)
{
    int start = 0;
    int ends = 0;

    for (int i = 0; tunnels[i]; i++) {
        start += (tunnels[i]->type == START);
        ends += (tunnels[i]->type == END);
    }
    if (start != 1 || ends != 1)
        return (84);
    return (0);
}

static int is_unique(tunnel_t **tunnels, int start)
{
    for (int j = start + 1; tunnels[j]; j++) {
        if (my_strcmp(tunnels[start]->name, tunnels[j]->name) == 0)
            return (0);
    }
    return (1);
}

static int name_checker(tunnel_t **tunnels)
{
    for (int i = 0; tunnels[i + 1]; i++) {
        if (!is_unique(tunnels, i))
            return (84);
    }
    return (0);
}

int error_management(tunnel_t **tunnels)
{
    if (is_there_entrance_and_end(tunnels) == 84)
        return (84);
    if (name_checker(tunnels) == 84)
        return (84);
    return (0);
}