/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** Display the enemys sprites
*/

#include "defender.h"

void display_enemy(gameloop_t *gameloop)
{
    enemy_t *enemy = gameloop->enemy;
    sfRenderWindow *win = gameloop->window;

    while (enemy != NULL) {
        sfRenderWindow_drawSprite(win, enemy->sprite.sprite, NULL);
        if (enemy->alive == true)
            display_health_bar(win, enemy->heatlh_bar);
        enemy = enemy->next;
    }
}
