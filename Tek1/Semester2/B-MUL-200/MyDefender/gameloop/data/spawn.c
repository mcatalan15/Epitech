/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** spawns the enemy
*/

#include "defender.h"

void spawn(gameloop_t *gameloop)
{
    float live;

    if (time_to_second(gameloop->spawn_clock) >= gameloop->time_enemy) {
        if (gameloop->time_enemy > 0.05)
            gameloop->time_enemy /= 1.01;
        gameloop->live_multi *= 1.01;
        live  = gameloop->live_multi;
        sfMusic_play(gameloop->music.tp);
        gameloop->score.nb += 5;
        gameloop->enemy = new_enemy(gameloop->pos_spawn, gameloop->enemy,
        gameloop->enemy_tex);
        gameloop->enemy->hp = (float)gameloop->enemy->hp * live;
        gameloop->enemy->max_hp = gameloop->enemy->hp;
        sfClock_restart(gameloop->spawn_clock);
    }
}

