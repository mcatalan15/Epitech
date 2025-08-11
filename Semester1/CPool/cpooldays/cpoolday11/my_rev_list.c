/*
** EPITECH PROJECT, 2021
** my_rev_list.c
** File description:
** description
*/

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *current;
    linked_list_t *next;
    linked_list_t *previous;

    previous = NULL;
    current = *begin;
    next = (*begin)->next;
    while (current != NULL) {
        current->next = previous;
        previous = current;
        current = next;
        if (next != NULL)
            next = next->next;
    }
    *begin = previous;
}
