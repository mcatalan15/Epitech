/*
** EPITECH PROJECT, 2022
** nodes.c
** File description:
** builds the nodes
*/

#include "lemin.h"
#include "structs.h"

static grid_node_t *new_node(tunnel_t *data,
    struct grid_node *parent, int distance)
{
    grid_node_t *nn = malloc(sizeof(grid_node_t));

    nn->data = data;
    nn->parent = parent;
    nn->distance = distance;
    nn->closed = 0;
    return nn;
}

void list_add_begin(linked_list_t **list, void *data)
{
    linked_list_t *new = malloc(sizeof(linked_list_t));

    new->data = data;
    new->previous = 0;
    if (!*list) {
        new->next = 0;
        *list = new;
        return;
    }
    new->next = *list;
    (*list)->previous = new;
    *list = new;
}

grid_node_t *open_node(grid_node_t *parent, tunnel_t *current,
    linked_list_t **open_list)
{
    grid_node_t *gcurrent = 0;

    if (parent)
        gcurrent = new_node(current, parent, parent->distance + 1);
    else
        gcurrent = new_node(current, NULL, 0);
    list_add_begin(open_list, gcurrent);
    return gcurrent;
}