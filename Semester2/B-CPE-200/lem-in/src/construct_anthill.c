/*
** EPITECH PROJECT, 2022
** construct_anthill.c
** File description:
** contructs the total path with tunnels
*/

#include "lemin.h"
#include "structs.h"

char *get_tunnel_name(char *str)
{
    char *name = NULL;
    int pos = 0;

    pos = my_strjump(str, ' ') + 1;
    if (!str[pos - 1] || !str[pos] || str[0] == '#')
        return (0);
    name = my_strndup(str, pos - 1);
    return (name);
}

int is_valid_tunnel(char *str, tunnel_t ***tunnel, int type, int tunnel_nb)
{
    char *name = get_tunnel_name(str);
    vector2_t vect;
    int pos = my_strjump(str, ' ') + 1;

    if (!name)
        return (0);
    vect.x = my_getnbr(str + pos);
    if (str[pos] == '-')
        return (0);
    pos += my_strjump(str + pos, ' ') + 1;
    if (!str[pos - 1] || !str[pos])
        return (0);
    vect.y = my_getnbr(str + pos);
    pos += my_strjump(str + pos, ' ');
    if (str[pos] != 0 && str[pos+ 1] != '#') {
        free(name);
        return (0);
    }
    add_tunnel(tunnel, vect, name, tunnel_nb);
    return (1);
}

void link_tunnel(char *entry, tunnel_t **anthill)
{
    char *first;
    tunnel_t *f_node = NULL;
    tunnel_t *s_node = NULL;
    int pos = 0;

    if (!anthill)
        return;
    first = my_strndup(entry, my_strjump(entry, '-'));
    f_node = search_node(first, anthill);
    free(first);
    if (entry[my_strjump(entry, '-')] == '\0')
        return;
    s_node = search_node(entry + my_strjump(entry, '-') + 1, anthill);
    if (!s_node || !f_node)
        return;
    link_nodes(f_node, s_node);
}

tunnel_t **build_colony(char ***tunnels_stdin)
{
    tunnel_t **anthill = NULL;
    char *entrance = NULL;
    int tunnel_nb = 0;
    int t_type = NORMAL;

    while (1) {
        entrance = get_entry(entrance, tunnels_stdin);
        if (!entrance)
            break;
        if (is_valid_tunnel(entrance, &anthill, t_type, tunnel_nb + 1)) {
            anthill[tunnel_nb]->type = t_type;
            t_type = NORMAL;
            tunnel_nb++;
        } else if (entrance[0] == '#' && entrance[1] == '#')
            t_type = get_command(entrance + 2, t_type);
        else
            link_tunnel(entrance, anthill);
    }
    return (anthill);
}

tunnel_t **construct_anthill(char *path, int *ants, char ***tunnel)
{
    char *entrance = NULL;
    tunnel_t **anthill = NULL;
    int link_position = 0;

    *tunnel = malloc(sizeof(char *));
    (*tunnel)[0] = NULL;
    entrance = get_entry(entrance, tunnel);
    if (!entrance)
        return (NULL);
    for (int i = 0; entrance[i]; i++) {
        if (entrance[i] < '0' || '9' < entrance[i])
            return (NULL);
    }
    *ants = my_getnbr(entrance);
    if (!entrance || *ants <= 0)
        return (NULL);
    anthill = build_colony(tunnel);
    return (anthill);
}