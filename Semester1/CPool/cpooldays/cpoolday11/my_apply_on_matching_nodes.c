/*
** EPITECH PROJECT, 2021
** my_apply_on_matching_nodes
** File description:
** A function that applies a function to the data of the nodes on the list
*/

int my_apply_on_matching_nodes(linked_list_t *begin , int (*f)(), void const *data_ref, int (*cmp)())
{
    while (begin != NULL) {
        if (cmp(begin->data, data_ref) == 0){
            f(begin->data);
        }
        begin = begin->next;
    }
    return (0);
}
