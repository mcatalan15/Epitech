/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** anim
*/

#include "rpg.h"

void anim_sprite(t_sprite *sprite, int offset, int max_value, int reset)
{
    if (sprite->rect->left < (reset + max_value)) {
        sprite->rect->left = sprite->rect->left + offset;
    } else {
        sprite->rect->left = reset;
    }
    sfSprite_setTextureRect(sprite->sprite, *sprite->rect);
}

int get_pos(t_sprite *sprite, background *back)
{
    sfVector2f pos_png = sfSprite_getPosition(sprite->sprite);

    if (back->x >= (pos_png.x - 70) &&
        back->y >= (pos_png.y - 70) &&
        back->x <= (pos_png.x + 70) &&
        back->y <= (pos_png.y + 70)) {
        return (0);
    }
    else
        return (1);
}

void animation_managing(background *back, t_sprite **sprite, t_inventory **inv)
{
    back->time = sfClock_getElapsedTime(back->clock);
    back->seconds = back->time.microseconds / 150000.0;
    if (back->seconds > 1.0) {
        anim_sprite(sprite[0], 21, 21, 0);
        anim_sprite(sprite[2], 21, 21, 0);
        anim_sprite(sprite[3], 21, 21, 0);
        anim_sprite(sprite[4], 21, 21, 0);
        anim_sprite(sprite[8], 21, 21, 0);
        anim_sprite(sprite[9], 21, 21, 0);
        anim_sprite(sprite[10], 21, 21, 0);
        anim_sprite(sprite[11], 21, 21, 0);
        if (sprite[1]->detector <= 11)
            anim_sprite(sprite[1], 16, 16, 0);
        else if (sprite[1]->detector >= 11)
            anim_sprite(sprite[1], 16, 16, 36);
        is_key_pressed_clock(inv, sprite, back);
        sfClock_restart(back->clock);
    }
}