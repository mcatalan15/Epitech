/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** keys
*/

#include "rpg.h"

int keys_d(background *ba, t_sprite **sp, t_collision **im)
{
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        if (ba->step_max <= 1000 || ba->step_max >= 3600)
            ba->speed_y = 4;
        if (ba->step_max > 1000 && ba->step_max <= 3600)
            ba->speed_y = 3;
        if (sp[1]->detector != 11) {
            sp[1]->rect->top = 0;
            sp[1]->rect->left = 0;
            sp[1]->detector = 11;
        }
        if (get_pixel(ba, sp, im, ba->instance) == 0)
            move_player(ba, sp);
    }
    return (0);
}

int keys_le(background *ba, t_sprite **sp, t_collision **im)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        if (ba->step_max <= 1000 || ba->step_max >= 3600)
            ba->speed_x = -4;
        if (ba->step_max > 1000 && ba->step_max <= 3600)
            ba->speed_x = -3;
        if (sp[1]->detector != 12) {
            sp[1]->rect->top = 0;
            sp[1]->rect->left = 36;
            sp[1]->detector = 12;
        }
        if (get_pixel(ba, sp, im, ba->instance) == 0)
            move_player(ba, sp);
    }
    return (0);
}

int keys_ri(background *ba, t_sprite **sp, t_collision **im)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        if (ba->step_max <= 1000 || ba->step_max >= 3600)
            ba->speed_x = 4;
        if (ba->step_max > 1000 && ba->step_max <= 3600)
            ba->speed_x = 3;
        if (sp[1]->detector != 13) {
            sp[1]->rect->top = 16;
            sp[1]->rect->left = 36;
            sp[1]->detector = 13;
        }
        if (get_pixel(ba, sp, im, ba->instance) == 0)
            move_player(ba, sp);
    }
    return (0);
}

void keys_2(background *back, t_sprite **sp, t_inventory **inv,
            t_collision **im)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        keys_le(back, sp, im);
    } else if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        keys_ri(back, sp, im);
    } else {
        back->speed_y = 0;
        back->speed_x = 0;
    }
    sword(inv[4], sp, inv[0]->music[3]);
}

void keys(background *back, t_sprite **sp, t_inventory **inv, t_collision **im)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        back->speed_y = -4;
        if (sp[1]->detector != 10) {
            sp[1]->rect->top = 16;
            sp[1]->rect->left = 0;
            sp[1]->detector = 10;
        }
        if (get_pixel(back, sp, im, back->instance) == 0)
            move_player(back, sp);
    } else if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        keys_d(back, sp, im);
    } else {
        keys_2(back, sp, inv, im);
    }
    sword(inv[4], sp, inv[0]->music[3]);
}