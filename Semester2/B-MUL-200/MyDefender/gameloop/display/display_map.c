/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** display_map
*/

#include "defender.h"

int display_map(sfRenderWindow *window, my_sprite_t **sprite, tower_t **tower)
{
    for (int i = 0 ; sprite[i] != NULL ; i++)
        for (int ii = 0 ; sprite[i][ii].sprite != NULL ; ii++)
            sfRenderWindow_drawSprite(window, sprite[i][ii].sprite, NULL);
}
