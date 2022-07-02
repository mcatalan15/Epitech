/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** enemy dies
*/

#include <stdlib.h>
#include "defender.h"



void free_enemy(enemy_t *enemy)
{
    sfSprite_destroy(enemy->sprite.sprite);
    free_health_bar(enemy->heatlh_bar);
}

void remove_enemy(enemy_t **enemy, enemy_t *prev, enemy_t **lis)
{
    enemy_t *temp = NULL;

    if (prev == NULL) {
        temp = (*enemy)->next;
        free_enemy(*enemy);
        *enemy = temp;
        *lis = temp;
    } else {
        prev->next = (*enemy)->next;
        free_enemy(*enemy);
        *enemy = prev->next;
    }
}

static void to_dead_enemy(enemy_t *enemy, anim_texture_t *texture)
{
    enemy->alive = false;
    enemy->texture = texture[enemy->type * 5 + 4].texture;
    sfSprite_setTexture(enemy->sprite.sprite, enemy->texture,
    sfTrue);
    sfSprite_move(enemy->sprite.sprite, ini_vector(0, 40));
    enemy->sprite.w = texture[enemy->type * 5 + 4].w;
    enemy->sprite.max_x = texture[enemy->type * 5 + 4].max_w;
    enemy->sprite.rect.left = 0;
    enemy->sprite.rect.width = texture[enemy->type * 5 +4].w;
    enemy->sprite.rect.height = texture[enemy->type * 5 + 4].h;
    sfSprite_setTextureRect(enemy->sprite.sprite,
    enemy->sprite.rect);
}

void die_enemy(gameloop_t *gameloop, enemy_t **enemy_l, anim_texture_t *t)
{
    enemy_t *prev_enemy = NULL;
    enemy_t *enemy = *enemy_l;

    while (enemy) {
        if (enemy->hp <= 0 && enemy->alive == true) {
            sfMusic_play(gameloop->music.die);
            gameloop->gold.nb += enemy->gold;
            gameloop->score.nb += enemy->score;
            to_dead_enemy(enemy, t);
        }
        if (enemy->alive == false && enemy->sprite.rect.left >= 1980) {
            remove_enemy(&enemy, prev_enemy, enemy_l);
        } else {
            prev_enemy = enemy;
            enemy = enemy->next;
        }
    }
}
