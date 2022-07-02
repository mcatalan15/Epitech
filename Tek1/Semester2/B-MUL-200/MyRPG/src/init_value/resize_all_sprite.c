/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** resize_all_sprite.c
*/

#include "rpg.h"

void inventory_size(t_inventory **inv)
{
    sfSprite_scale(inv[2]->sprite, (sfVector2f) {2.0, 2.0});
    sfSprite_scale(inv[4]->sprite, (sfVector2f) {1.5, 1.5});
    sfSprite_scale(inv[11]->sprite, (sfVector2f) {2.0, 2.0});
}

void sprite_size(t_sprite **sprite)
{
    sfVector2f vect = {3, 3};

    sfSprite_scale(sprite[1]->sprite, vect);
    sfSprite_scale(sprite[0]->sprite, vect);
    sfSprite_scale(sprite[2]->sprite, vect);
    sfSprite_scale(sprite[3]->sprite, vect);
    sfSprite_scale(sprite[4]->sprite, vect);
    for (int i = 8; sprite[i] != NULL; i++)
        sfSprite_scale(sprite[i]->sprite, vect);
}
