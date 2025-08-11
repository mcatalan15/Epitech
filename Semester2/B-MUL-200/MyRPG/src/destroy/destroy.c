/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** destroy.c
*/

#include "rpg.h"

void destroy_sprite(t_sprite **sprite)
{
    for (int i = 0; sprite[i] != NULL; i++) {
        sfTexture_destroy(sprite[i]->texture);
        sfSprite_destroy(sprite[i]->sprite);
    }
}

void destroy_image(t_collision **image)
{
    for (int i = 0; image[i] != NULL; i++)
        sfImage_destroy(image[i]->image);
}

void destroy_inv(t_inventory **inv)
{
    for (int i = 0; inv[i] != NULL; i++) {
        sfTexture_destroy(inv[i]->texture);
        sfSprite_destroy(inv[i]->sprite);
    }
}

void destroy_zone(t_zone **zone)
{
    for (int i = 0; zone[i] != NULL; i++) {
        sfTexture_destroy(zone[i]->texture);
        sfSprite_destroy(zone[i]->sprite);
    }
}

void destroy(t_sprite **sprite, t_inventory **inv, t_zone **zone,
            background *back)
{
    sfClock_destroy(back->clock);
    destroy_sprite(sprite);
    destroy_inv(inv);
    destroy_zone(zone);
}
