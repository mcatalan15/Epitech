/*
** EPITECH PROJECT, 2021
** my_list_size.c
** File description:
** description
*/

int my_list_size(linked_list_t const *begin)
{
    int i = 0;

    while (begin != NULL) {
        begin = begin->next;
        i++;
    }
    return (i);
}
