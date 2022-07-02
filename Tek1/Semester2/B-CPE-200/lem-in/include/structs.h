/*
** EPITECH PROJECT, 2022
** lemin
** File description:
** structs
*/

#ifndef STRUCTS_H
    #define STRUCTS_H

    #include "lemin.h"

    typedef enum tunnel_type {
        ERROR = 0,
        NORMAL = 1,
        START = 2,
        END = 3,
        CHECK = 4,
    } tunnel_type;

    typedef struct tunnel_s {
        int tunnel_id;
        char *name;
        int x;
        int y;
        tunnel_type type;
        int link_nb;
        struct tunnel_s **links;
    } tunnel_t;

    typedef struct pathing_count_s {
        tunnel_t **tunnels;
        int rb_size;
        char **rb;
    } pathing_count_t;

    typedef struct grid_node {
        int distance;
        int closed;
        tunnel_t *data;
        struct grid_node *parent;
    } grid_node_t;

    typedef struct linked_list {
        void *data;
        struct linked_list *next;
        struct linked_list *previous;
    } linked_list_t;

    typedef struct path_s {
        tunnel_t **path;
        int len;
    } path_t;

    path_t get_new_path(tunnel_t **tunnels, int road_block_size,
        char **road_block);

    typedef struct vector2_s {
        int x;
        int y;
    } vector2_t;

#endif