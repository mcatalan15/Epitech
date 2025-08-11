/*
** EPITECH PROJECT, 2022
** linked_lib.c
** File description:
** ...
*/

#include "my.h"

list *init(void)
{
    list *new = malloc(sizeof(*new));

    new->first = NULL;
    return (new);
}

void add(list *first, int x, int y)
{
    elent *new = malloc(sizeof(*new));

    new->next = first->first;
    first->first = new;
    new->x = x;
    new->y = y;
}

void add_o_to_llist(char *str[], list *new, int i, int j)
{
    if (str[j][i] == 'O')
        add(new, i, j);
}

list *get_o_pos(t_moment *m)
{
    int i = 0;
    list *new = init();

    for (int j = 0; j < m->lines_nbr; j += 1) {
        for (i = 0; m->str[j][i] != '\n'; i += 1) {
            add_o_to_llist(m->str, new, i, j);
        }
    }
    return (new);
}