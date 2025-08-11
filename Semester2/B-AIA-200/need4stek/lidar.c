/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main ai
*/

#include "ai.h"
#include <stdlib.h>

void lidar(car_t *status)
{
    char *result;
    char **tab;

    result = cmd("GET_INFO_LIDAR\n", &status->end);
    tab = my_str_to_wordtab((char *)result, ':');
    if (tab[34]) {
        status->left = atof(tab[3]);
        status->front = atof(tab[15]);
        status->right = atof(tab[34]);
    }
    for (int i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);
}
