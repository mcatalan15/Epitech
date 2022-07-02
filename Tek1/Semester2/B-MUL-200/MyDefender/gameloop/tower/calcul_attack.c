/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** calcul_attack
*/

#include <math.h>
#include "defender.h"



sfVector2f get_tower_pos(sfVector2f pos)
{
    sfVector2f tower_pos = {pos.x, pos.y + ICE_IDLE.h / 2};
    sfVector2i temp = {tower_pos.x / TILE_SIZE, tower_pos.y / TILE_SIZE};
    sfVector2f final_pos;

    final_pos.x = (temp.x + 0.5) * TILE_SIZE;
    final_pos.y = (temp.y + 0.5) * TILE_SIZE;
    return (final_pos);
}

void ice_attack(tower_t *tower, enemy_t *enemy)
{
    sfVector2f pos = get_tower_pos(sfSprite_getPosition(tower->sprite.sprite));
    float radius = (tower->radius + 0.5) * TILE_SIZE;
    sfVector2f m_pos;
    sfFloatRect rect;

    while (enemy) {
        m_pos = sfSprite_getPosition(enemy->sprite.sprite);
        rect = sfSprite_getLocalBounds(enemy->sprite.sprite);
        m_pos.x += rect.width / 2;
        m_pos.y += rect.height / 2;
        if (fabs(m_pos.x - pos.x) <= radius && fabs(m_pos.y - pos.y) <= radius)
            enemy->slow = get_enemy_speed(tower->slow, enemy->slow);
        enemy = enemy->next;
    }
}

void poison_attack(tower_t *tower, enemy_t *enemy)
{
    sfVector2f pos = get_tower_pos(sfSprite_getPosition(tower->sprite.sprite));
    float radius = (tower->radius + 0.5) * TILE_SIZE;
    sfVector2f m_pos;
    sfFloatRect rect;

    if (time_to_second(tower->attack_clock) < tower->attack_speed)
        return;
    sfClock_restart(tower->attack_clock);
    while (enemy) {
        m_pos = sfSprite_getPosition(enemy->sprite.sprite);
        rect = sfSprite_getLocalBounds(enemy->sprite.sprite);
        m_pos.x += rect.width / 2;
        m_pos.y += rect.height / 2;
        if (fabs(m_pos.x - pos.x) <= radius && fabs(m_pos.y - pos.y) <= radius)
            enemy->hp -= tower->damage;
        update_health_bar(enemy->heatlh_bar, enemy->hp, enemy->max_hp);
        enemy = enemy->next;
    }
}

void storm_attack(tower_t *tower, enemy_t *enemy)
{
    sfVector2f pos = get_tower_pos(sfSprite_getPosition(tower->sprite.sprite));
    float radius = (tower->radius + 0.5) * TILE_SIZE;
    sfVector2f m_pos;
    sfFloatRect rect;
    int a = tower_a(time_to_second(tower->attack_clock), tower->attack_speed);

    sfRectangleShape_setFillColor(tower->po, ini_color(50, 50, 200, a));
    if (time_to_second(tower->attack_clock) < tower->attack_speed)
        return;
    sfClock_restart(tower->attack_clock);
    while (enemy) {
        m_pos = sfSprite_getPosition(enemy->sprite.sprite);
        rect = sfSprite_getLocalBounds(enemy->sprite.sprite);
        m_pos.x += rect.width / 2;
        m_pos.y += rect.height / 2;
        if (fabs(m_pos.x - pos.x) <= radius && fabs(m_pos.y - pos.y) <= radius)
            enemy->hp -= tower->damage;
        update_health_bar(enemy->heatlh_bar, enemy->hp, enemy->max_hp);
        enemy = enemy->next;
    }
}

void fire_attack(tower_t *tower, enemy_t *enemy)
{
    sfVector2f pos = get_tower_pos(sfSprite_getPosition(tower->sprite.sprite));
    float radius = (tower->radius + 0.5) * TILE_SIZE;
    sfVector2f m_pos;
    sfFloatRect rect;
    int a = tower_a(time_to_second(tower->attack_clock), tower->attack_speed);

    sfRectangleShape_setFillColor(tower->po, ini_color(200, 50, 50, a));
    if (time_to_second(tower->attack_clock) < tower->attack_speed)
        return;
    sfClock_restart(tower->attack_clock);
    while (enemy) {
        m_pos = sfSprite_getPosition(enemy->sprite.sprite);
        rect = sfSprite_getLocalBounds(enemy->sprite.sprite);
        m_pos.x += rect.width / 2;
        m_pos.y += rect.height / 2;
        if (fabs(m_pos.x - pos.x) <= radius && fabs(m_pos.y - pos.y) <= radius)
            enemy->hp -= tower->damage;
        update_health_bar(enemy->heatlh_bar, enemy->hp, enemy->max_hp);
        enemy = enemy->next;
    }
}
