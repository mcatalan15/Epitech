/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** free_tower
*/

#include <stdlib.h>
#include "defender.h"

void free_tower(tower_t tower)
{
    sfClock_destroy(tower.attack_clock);
    sfRectangleShape_destroy(tower.po);
    sfSprite_destroy(tower.sprite.sprite);
}