/*
** EPITECH PROJECT, 2022
** tunnel_amount.c
** File description:
** takes into account the path to see which one is the more optimal
*/

#include "lemin.h"
#include "structs.h"

static void open_tunneling(pathing_count_t init_data,
    grid_node_t **current, linked_list_t **open_list)
{
    tunnel_t *current_check = 0;
    grid_node_t *tmp = 0;

    for (int y = 0; (*current)->data->links[y]; y++) {
        current_check = (*current)->data->links[y];
        if (!is_blocked(current_check->name, init_data)
            && !(is_open(*open_list, (*current)->data->links[y]))) {
            tmp = open_node(*current, current_check, open_list);
        }
        if (tmp && tmp->data->type == END) {
            *current = tmp;
            return;
        }
    }
}

static int tunnel_search(pathing_count_t init_data,
    grid_node_t **current, linked_list_t **open_list)
{
    while (1) {
        open_tunneling(init_data, current, open_list);
        if ((*current)->data->type == END)
            return 1;
        (*current)->closed = 1;
        *current = get_nearest(*open_list);
        if (!(*current))
            return 0;
    }
}

static path_t launch_tun_research(pathing_count_t init_data)
{
    linked_list_t *open_list = 0;
    grid_node_t *current = open_node(0, init_data.tunnels[0], &open_list);
    path_t path = {0};
    int result = tunnel_search(init_data, &current, &open_list);

    if (result) {
        path = create_path_from_current(current);
    } else {
        path.len = -1;
    }
    for (linked_list_t *list = open_list; list; list = list->next) {
        free(list->data);
    }
    list_free_all(&open_list);
    return path;
}

path_t get_new_path(tunnel_t **tunnels, int road_block_size,
    char **road_block)
{
    set_start(tunnels);
    return launch_tun_research(
        (pathing_count_t){tunnels, road_block_size, road_block});
}