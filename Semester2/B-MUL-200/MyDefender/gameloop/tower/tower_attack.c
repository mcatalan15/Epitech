/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** tower_attack
*/

#include "defender.h"

static void remove_all_effect(enemy_t *enemy)
{
    while (enemy) {
        enemy->slow = 0;
        enemy = enemy->next;
    }
}

static void swith_tower(tower_t *tower, enemy_t *enemy)
{
    if (tower->sprite.sprite == NULL)
        return;
    switch (tower->type) {
    case 1:
        poison_attack(tower, enemy);
        break;
    case 2:
        fire_attack(tower, enemy);
        break;
    case 3:
        storm_attack(tower, enemy);
        break;
    case 4:
        ice_attack(tower, enemy);
        break;
    }
}

int tower_attack(tower_t **tower, enemy_t *enemy)
{
    remove_all_effect(enemy);
    for (int i = 0 ; i < 13 ; i++)
        for (int ii = 0 ; ii < 24 ; ii++)
            swith_tower(&(tower[i][ii]), enemy);
    return (SUCCESS);
}
