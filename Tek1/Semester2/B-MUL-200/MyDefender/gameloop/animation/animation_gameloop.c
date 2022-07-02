/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** more animations
*/

#include "defender.h"

int animation_gameloop(gameloop_t *gameloop)
{
    if (time_to_second(gameloop->anim_clock) > 0.07) {
        animation_tower(gameloop);
        animation_door(&gameloop->door1, &gameloop->door2);
        animation_map(gameloop->map);
        animate_enemy(gameloop->enemy);
        sfClock_restart(gameloop->anim_clock);
    }
    return (SUCCESS);
}
