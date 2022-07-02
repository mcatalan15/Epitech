/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** enemy animation
*/

#include "defender.h"

void animate_enemy(enemy_t *enemy)
{
    while (enemy != NULL) {
        move_rect(&enemy->sprite.rect, enemy->sprite.w,
        enemy->sprite.max_x);
        sfSprite_setTextureRect(enemy->sprite.sprite, enemy->sprite.rect);
        enemy = enemy->next;
    }
}