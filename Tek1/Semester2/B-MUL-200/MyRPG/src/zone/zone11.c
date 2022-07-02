/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** zone11
*/

#include "rpg.h"

int zone11_bis(background *ba, t_sprite **sp)
{
    if ((ba->y + 55) >= 1070.0) {
        ba->y = 0;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 1;
    }
    if (ba->x <= -1) {
        ba->x = 1880;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 4;
    }
    return (0);
}

int init_zone11(t_zone **zo, background *ba, t_sprite **sp, t_inventory **inv)
{
    sfRenderWindow_drawSprite(ba->window, zo[1]->sprite, NULL);
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
    display_enemy(ba, sp[3], inv[4], zo[0]->music[2]);
    check_hit(sp[3], sp[1], sp[7], zo[0]->music[4]);
    display_enemy(ba, sp[4], inv[4], zo[0]->music[2]);
    check_hit(sp[4], sp[1], sp[7], zo[0]->music[4]);
    display_inventory(ba, inv);
    if (load_life(ba, sp) == 1)
        return (1);
    zone11_bis(ba, sp);
    return (0);
}

void display_enemy(background *ba, t_sprite *enemy, t_inventory *sword,
                    t_music *sound)
{
    sfVector2f sword_pos = sfSprite_getPosition(sword->sprite);
    sfVector2f enemy_pos = sfSprite_getPosition(enemy->sprite);

    if (enemy->detector == 0)
        sfRenderWindow_drawSprite(ba->window, enemy->sprite, NULL);
    if (enemy_pos.x >= (sword_pos.x - 70) &&
        enemy_pos.y >= (sword_pos.y - 70) &&
        enemy_pos.x <= (sword_pos.x + 70) &&
        enemy_pos.y <= (sword_pos.y + 70)) {
        enemy->detector = 1;
        ba->enemies_max++;
        play_sound(sound);
        sfSprite_setPosition(enemy->sprite, (sfVector2f) {0.0, 0.0});
    }
}

void check_hit(t_sprite *enemy, t_sprite *player, t_sprite *life,
                t_music *sound)
{
    sfVector2f enemy_pos = sfSprite_getPosition(enemy->sprite);
    sfVector2f player_pos = sfSprite_getPosition(player->sprite);
    static int i = 100;

    if (enemy_pos.x >= (player_pos.x - 70) &&
        enemy_pos.y >= (player_pos.y - 70) &&
        enemy_pos.x <= (player_pos.x + 70) &&
        enemy_pos.y <= (player_pos.y + 70)) {
        if (i == 100) {
            life->detector++;
            play_sound(sound);
            i--;
        }
        else if (i == 0)
            i = 100;
        else
            i--;
    }
}
