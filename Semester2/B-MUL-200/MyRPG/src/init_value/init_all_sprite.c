/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** init_all_sprite.c
*/

#include "rpg.h"

int init_all_sprite(t_sprite **sprite, background *back, t_zone **zone,
                    t_inventory **inventory)
{
    for (int i = 0; sprite[i] != NULL; i++)
        sfRenderWindow_drawSprite(back->window, sprite[i]->sprite, NULL);
    for (int j = 0; zone[j] != NULL; j++)
        sfRenderWindow_drawSprite(back->window, zone[j]->sprite, NULL);
    for (int k = 0; inventory[k] !=  NULL; k++)
        sfRenderWindow_drawSprite(back->window, inventory[k]->sprite, NULL);
    return (0);
}
