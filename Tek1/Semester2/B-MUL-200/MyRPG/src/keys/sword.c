/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** sword
*/

#include "rpg.h"

void sword_10(t_inventory *inv, t_sprite **sprite, sfVector2f pos_player)
{
    if (sprite[1]->detector == 10) {
        pos_player.x -= 5;
        pos_player.y -= 40;
        inv->rect->top = 0;
        inv->rect->left = 0;
        inv->rect->width = 25;
        inv->rect->height = 40;
        sfSprite_setPosition(inv->sprite, pos_player);
    }
}

void sword_11(t_inventory *inv, t_sprite **sprite, sfVector2f pos_player)
{
    if (sprite[1]->detector == 11) {
        pos_player.x -= 5;
        pos_player.y += 20;
        inv->rect->top = 40;
        inv->rect->left = 0;
        inv->rect->width = 25;
        inv->rect->height = 40;
        sfSprite_setPosition(inv->sprite, pos_player);
    }
}

void sword_12(t_inventory *inv, t_sprite **sprite, sfVector2f pos_player)
{
    if (sprite[1]->detector == 12) {
        pos_player.x -= 40;
        pos_player.y += 15;
        inv->rect->top = 50;
        inv->rect->left = 30;
        inv->rect->width = 40;
        inv->rect->height = 20;
        sfSprite_setPosition(inv->sprite, pos_player);
    }
}

void sword_13(t_inventory *inv, t_sprite **sprite, sfVector2f pos_player)
{
    if (sprite[1]->detector == 13) {
        pos_player.x += 10;
        pos_player.y += 15;
        inv->rect->top = 10;
        inv->rect->left = 30;
        inv->rect->width = 40;
        inv->rect->height = 20;
        sfSprite_setPosition(inv->sprite, pos_player);
    }
}

void sword(t_inventory *inv, t_sprite **sprite, t_music *sound)
{
    sfVector2f pos_player = sfSprite_getPosition(sprite[1]->sprite);
    static int i = 200;

    if (sfKeyboard_isKeyPressed(sfKeySpace) && i > 50) {
        if (i == 200)
            play_sound(sound);
        inv->detector = 1;
        sword_10(inv, sprite, pos_player);
        sword_11(inv, sprite, pos_player);
        sword_12(inv, sprite, pos_player);
        sword_13(inv, sprite, pos_player);
        i--;
    }
    if (i <= 50 && i > 0)
        i--;
    else if (i <= 0)
        i = 200;
    sfSprite_setTextureRect(inv->sprite, *inv->rect);
}