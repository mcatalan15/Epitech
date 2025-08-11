/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdio.h>
#include <stdlib.h>

int safe_free(void **ptr)
{
    if (*ptr) {
        free(*ptr);
        *ptr = NULL;
    }
    return (42);
}

int x_free(void *ptr)
{
    if (ptr) {
        free(ptr);
        ptr = NULL;
    }
    return (42);
}

void double_free(char ***ptr)
{
    int i = -1;

    while ((*ptr) && (*ptr)[++i])
        if ((*ptr)[i]) {
            free((*ptr)[i]);
            (*ptr)[i] = NULL;
        }
    if (*ptr) {
        free(*ptr);
        ptr = NULL;
    }
}
