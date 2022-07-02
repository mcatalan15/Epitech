/*
** EPITECH PROJECT, 2022
** end_anim2.c
** File description:
** end animations2
*/

#include <stdlib.h>
#include "defender.h"
#include "end_menu.h"

static void init_enemy_end(enemy_t *enemy)
{
    sfVector2f pos;
    sfFloatRect rect;

    while (enemy) {
        rect = sfSprite_getGlobalBounds(enemy->sprite.sprite);
        pos = ini_vector(rect.width / 2, rect.height / 2);
        sfSprite_setOrigin(enemy->sprite.sprite, pos);
        enemy->speed = (rand() % 2 + 1);
        enemy = enemy->next;
    }
}

void end_anim_enemy(enemy_t *enemy, end_menu_t menu)
{
    sfVector2f pos;
    sfFloatRect rect;

    if (menu.init == 0) {
        init_enemy_end(enemy);
    }
    while (enemy) {
        pos = ini_vector(0, enemy->speed * 20);
        sfSprite_move(enemy->sprite.sprite, pos);
        pos = sfSprite_getPosition(enemy->sprite.sprite);
        pos.y -= 10;
        pos.x += enemy->sprite.w / 2;
        move_health_bar(enemy->heatlh_bar, pos);
        sfSprite_rotate(enemy->sprite.sprite, enemy->speed * 2);
        enemy = enemy->next;
    }
}