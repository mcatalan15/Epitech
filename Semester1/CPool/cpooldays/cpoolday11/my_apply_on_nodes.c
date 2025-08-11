/*
** EPITECH PROJECT, 2021
** my_apply_on_nodes
** File description:
** Write a function named that applies a function
*/

int my_apply_on_nodes(linked_list_t *begin , int (*f)(void *))
{
    while (begin != NULL) {
        f(begin->data);
        begin = begin->next;
    }
}
