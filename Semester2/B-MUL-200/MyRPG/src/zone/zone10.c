/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** zone10
*/

#include "rpg.h"

int zone10_bis(background *ba, t_sprite **sp)
{
    if ((ba->y) <= -1) {
        ba->y = 1000;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f) {ba->x, ba->y});
        ba->instance = 2;
    }
    if (ba->x <= -1) {
        ba->x = 1880;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f) {ba->x, ba->y});
        ba->instance = 3;
    }
    return (0);
}

int init_zone10(t_zone **zo, background *ba, t_sprite **sp, t_inventory **inv)
{
    sfRenderWindow_drawSprite(ba->window, zo[0]->sprite, NULL);
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
    display_enemy(ba, sp[0], inv[4], zo[0]->music[2]);
    check_hit(sp[0], sp[1], sp[7], zo[0]->music[4]);
    display_enemy(ba, sp[2], inv[4], zo[0]->music[2]);
    check_hit(sp[2], sp[1], sp[7], zo[0]->music[4]);
    display_inventory(ba, inv);
    if (load_life(ba, sp) == 1)
        return (1);
    zone10_bis(ba, sp);
    return (0);
}
