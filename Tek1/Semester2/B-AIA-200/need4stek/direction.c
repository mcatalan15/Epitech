/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main ai
*/

#include "ai.h"

void direction(car_t *steering)
{
    int i;
    float distance[8] = {2500, 1500, 900, 600, 400, 200, 50, 0};
    float direction[8] = {0.0, 0.05, 0.1, 0.12, 0.15, 0.25, 0.4};
    int comp = steering->left - steering->right;

    steering->obstacle = steering->front < 150 || steering->left <= 20 ||
    steering->right <= 20 ? 1 : 0;
    for (i = 0; distance[i] >= steering->front; i++);
    if ((comp > 0 && steering->obstacle) || (comp < 0 && !steering->obstacle))
        cmd("WHEELS_DIR:-%.4f\n", direction[i], &steering->end);
    else
        cmd("WHEELS_DIR:%.4f\n", direction[i], &steering->end);
}