/*
** EPITECH PROJECT, 2022
** link.c
** File description:
** links the nodes
*/

#include "lemin.h"
#include "structs.h"

void link_nodes(tunnel_t *first, tunnel_t *second)
{
    first->link_nb++;
    second->link_nb++;
    first->links = add_space(first->links, first->link_nb);
    second->links = add_space(second->links, second->link_nb);
    first->links[first->link_nb - 1] = second;
    second->links[second->link_nb - 1] = first;
}