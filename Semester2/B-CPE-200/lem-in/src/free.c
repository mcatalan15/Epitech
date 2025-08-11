/*
** EPITECH PROJECT, 2022
** free.c
** File description:
** frees
*/

#include "lemin.h"
#include "structs.h"

void list_free_all(linked_list_t **list)
{
    if (*list) {
        if ((*list)->next)
            *list = (*list)->next;
        while ((*list)->next) {
            free((*list)->previous);
            *list = (*list)->next;
        }
        if ((*list)->previous)
            free((*list)->previous);
        free(*list);
    }
    *list = 0;
}

void free_paths(path_t *paths)
{
    for (int i = 0; paths[i].len != -1; i++)
        free(paths[i].path);
    free(paths);
}