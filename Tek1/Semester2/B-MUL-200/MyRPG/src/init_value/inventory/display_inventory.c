/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** display_inventory
*/

#include "rpg.h"

void display_inventory(background *back, t_inventory **inv)
{
    if (inv[2]->detector == 1) {
        sfRenderWindow_drawSprite(back->window, inv[2]->sprite, NULL);
        sfSprite_setTextureRect(inv[11]->sprite, *inv[11]->rect);
        sfRenderWindow_drawSprite(back->window, inv[11]->sprite, NULL);
        if (inv[0]->detector == 1)
            sfRenderWindow_drawSprite(back->window, inv[0]->sprite, NULL);
    }
    if (inv[4]->detector == 1) {
        sfRenderWindow_drawSprite(back->window, inv[4]->sprite, NULL);
        inv[4]->detector = 0;
    }
}