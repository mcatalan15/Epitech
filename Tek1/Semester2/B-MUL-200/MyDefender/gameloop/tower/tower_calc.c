/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** tower_alpha
*/

#include "defender.h"

int tower_a(float time, float attack)
{
    int alpha = 50;
    float value = time - attack / 2;

    if (time < attack / 2)
        alpha -= value * 40;
    else
        alpha += value * 40;
    return (alpha);
}

int get_enemy_speed(int tower, int enemy)
{
    if (enemy > tower)
        return (enemy);
    else
        return (tower);
}