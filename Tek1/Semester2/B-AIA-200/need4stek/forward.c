/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main ai
*/

#include "ai.h"

char *forward(car_t *status)
{
    int i;
    float distance[6] = {2000, 1100, 800, 400, 200, 0};
    float speed[6] = {1, 0.8, 0.6, 0.3, 0.2, 0.1};
    for (i = 0; distance[i] > status->front; i++);
    return (cmd("CAR_FORWARD:%.2f\n", speed[i], status->end));
}