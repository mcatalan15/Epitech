/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** move
*/

#include "rpg.h"

void move_player(background *back, t_sprite **pz)
{
    sfVector2f pos = sfSprite_getPosition(pz[1]->sprite);

    back->mov_x = 0.0;
    back->mov_y = 0.0;
    back->mov_x = (back->speed_x * back->seconds);
    back->mov_y = (back->speed_y * back->seconds);
    back->movement = (sfVector2f) {back->mov_x, back->mov_y};
    sfSprite_move(pz[1]->sprite, back->movement);
    back->x = pos.x;
    back->y = pos.y;
    back->speed_x = 0;
    back->speed_y = 0;
    back->step_max = (back->step_r++ / 4);
}
