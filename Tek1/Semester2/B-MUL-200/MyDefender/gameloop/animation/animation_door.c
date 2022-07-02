/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** animation for the door
*/

#include "defender.h"

int animation_door(my_sprite_t *door1, my_sprite_t *door2)
{
    move_rect(&door1->rect, door1->w, door1->max_x);
    sfSprite_setTextureRect(door1->sprite, door1->rect);
    move_rect(&door2->rect, door2->w, door2->max_x);
    sfSprite_setTextureRect(door2->sprite, door2->rect);
}
