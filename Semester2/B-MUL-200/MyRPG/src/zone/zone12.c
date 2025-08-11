/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** zone12
*/

#include "rpg.h"

int zone12_bis(background *ba, t_sprite **sp)
{
    if ((ba->y) <= -1) {
        ba->y = 1000;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 4;
    }
    if (ba->x >= 1920.0) {
        ba->x = 0;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 1;
    }
    if (ba->x <= -1) {
        ba->x = 1880;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 5;
    }
    return (0);
}

void draw_12(background *ba, t_sprite **sp, t_inventory **inv, t_music **sound)
{
    display_enemy(ba, sp[8], inv[4], sound[2]);
    check_hit(sp[8], sp[1], sp[7], sound[4]);
    display_enemy(ba, sp[9], inv[4], sound[2]);
    check_hit(sp[8], sp[1], sp[7], sound[4]);
}

int init_zone12(t_zone **zo, background *ba, t_sprite **sp, t_inventory **inv)
{
    sfRenderWindow_drawSprite(ba->window, zo[2]->sprite, NULL);
    sfRenderWindow_drawSprite(ba->window, sp[1]->sprite, NULL);
    if (ba->pause == 42) {
        if (init_button_resume(ba) == 1)
                ba->pause = 0;
        if (init_button_quit_game(ba) == 1) {
            return (1);
        }
        if (init_button_menu_game(ba) == 1)
            return (game());
    }
    display_inventory(ba, inv);
    draw_12(ba, sp, inv, zo[0]->music);
    if (load_life(ba, sp) == 1)
        return (1);
    zone12_bis(ba, sp);
    return (0);
}
