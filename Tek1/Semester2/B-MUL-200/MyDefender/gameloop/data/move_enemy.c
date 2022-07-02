/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** moves the enemy
*/

#include <stdlib.h>
#include "defender.h"

static sfVector2f set_move(enemy_t *enemy)
{
    sfVector2f move;
    float speed = enemy->speed;

    move.x = 0;
    move.y = 0;
    if (enemy->slow != 0)
        speed -= (float)enemy->slow / 100 * speed;
    if (enemy->dir == 'd')
        move.y = speed;
    if (enemy->dir == 'u')
        move.y = speed * -1;
    if (enemy->dir == 'r')
        move.x = speed;
    if (enemy->dir == 'l')
        move.x = speed * -1;
    return (move);
}

void move_enemy(gameloop_t *game)
{
    enemy_t *temp = game->enemy;
    sfVector2f pos;

    while (temp) {
        if (temp->alive == true) {
            set_dir(temp, game->enemy_tex, game->map, temp->center);
            sfSprite_move(temp->sprite.sprite, set_move(temp));
            pos = sfSprite_getPosition(temp->sprite.sprite);
            pos.y -= 10;
            pos.x += temp->sprite.w / 2;
            move_health_bar(temp->heatlh_bar, pos);
        }
        temp = temp->next;
    }
}
