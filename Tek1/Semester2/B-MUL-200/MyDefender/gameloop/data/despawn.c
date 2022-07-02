/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** despawn of enemy on door
*/

#include "defender.h"

void despawn(gameloop_t *gameloop)
{
    enemy_t *prev_enemy = NULL;
    enemy_t *enemy = gameloop->enemy;

    while (enemy) {
        if (enemy->dir == 'e') {
            sfMusic_play(gameloop->music.tp);
            gameloop->hp.nb--;
            remove_enemy(&enemy, prev_enemy, &gameloop->enemy);
        }
        if (enemy) {
            prev_enemy = enemy;
            enemy = enemy->next;
        }
    }
}
