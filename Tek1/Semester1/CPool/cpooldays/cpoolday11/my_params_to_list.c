/*
** EPITECH PROJECT, 2021
** my_param_to_list.c
** File description:
** description
*/
#include <stdlib.h>

linked_list_t *adding_structures(void *data, struct linked_list *list)
{
    linked_list_t *first_list;
    first_list = malloc(sizeof(linked_list_t));
    first_list->data = data;
    first_list->next = list;
    return (first_list);
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    int i = 0;
    linked_list_t *list;
    list = NULL;

    while (i < ac) {
        list = adding_structures(av[i], list);
        i++;
    }
    return (list);
}

