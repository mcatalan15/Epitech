/*
** EPITECH PROJECT, 2022
** lemin.h
** File description:
** lemin header
*/

#ifndef LEMIN_H
    #define LEMIN_H

    #include <stddef.h>
    #include <stdlib.h>
    #include "structs.h"
    #include <unistd.h>
    #include <stdio.h>

    int lemin(char **av);
    void set_start(tunnel_t **tunnels);
    int is_blocked(char *node, pathing_count_t init_data);
    int is_open(linked_list_t *open_list, tunnel_t *tunnel);
    grid_node_t *get_nearest(linked_list_t *open_list);
    grid_node_t *open_node(grid_node_t *parent, tunnel_t *current,
        linked_list_t **open_list);
    path_t create_path_from_current(grid_node_t *current);
    path_t *shortest_paths(tunnel_t **tunnels);
    int get_max_nb_of_paths(tunnel_t **tunnels);
    int find_shortest_paths(tunnel_t **tunnels, path_t *paths, int nb_paths);
    char **get_roadblocks(int *roadblcks_nb, char **roadblcks, path_t path);
    void free_paths(path_t *paths);
    int display_ants_movements(path_t *paths, int nb_of_ants);
    int *get_ants_per_path(path_t *paths, int nb_of_ants);
    int *get_default_distribution(path_t *paths, int ants, int *nb_paths);
    int is_current_path_worth_it(int *ants_per_path,
    path_t *paths, int path_index);
    int get_total_lapses(int *ants_per_path, path_t *paths);
    tunnel_t *search_node(char *name, tunnel_t **anthill);
    char *get_entry(char *old_entry, char ***tunnels_stdin);
    void add_tunnel(tunnel_t ***tunnel, vector2_t pos, char *name, int nb);
    void link_nodes(tunnel_t *first, tunnel_t *second);
    int get_command(char *cmd, int actual_type);
    int is_digit(char c);
    void display_info(int nb_of_ants, tunnel_t **tunnels, char **t);
    void display_movements_terminal(path_t *paths,
    int *ants_per_path, int ants);
    tunnel_t **add_space(tunnel_t **tunnel, int nb);
    tunnel_t **construct_anthill(char *filepath, int *ants, char ***t);
    int error_management(tunnel_t **tunnels);
    path_t *shortest_paths(tunnel_t **tunnels);
    void display_info(int nb_of_ants, tunnel_t **tunnels, char **t);
    int display_ants_movements(path_t *paths, int nb_of_ants);
    void free_paths(path_t *paths);
    void list_free_all(linked_list_t **list);
    void list_add_begin(linked_list_t **list, void *data);

    int my_printf(const char *, ...);
    int my_strcmp(char const *s1, char const *s2);
    int my_getnbr(char *str);
    int my_strjump(char *str, char c);
    char *my_strndup(char const *str, int len);
    int my_strlen(char const *str);
    char *my_strdup(char const *str);

#endif