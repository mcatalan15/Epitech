/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** init_zone.c
*/

#include "rpg.h"

static t_zone *init_zone(char *str, float x, float y)
{
    t_zone *zone = malloc(sizeof(t_zone));
    sfVector2f pos = {x, y};

    if (zone == NULL)
        return (NULL);
    zone->texture = sfTexture_createFromFile(str, NULL);
    zone->sprite = sfSprite_create();
    if (!zone->sprite || !zone->texture)
        return (NULL);
    sfSprite_setTexture(zone->sprite, zone->texture, sfTrue);
    sfSprite_setPosition(zone->sprite, pos);
    return (zone);
}

t_zone **init_val_zone(void)
{
    t_zone **zone = malloc(sizeof(t_zone *) * 14);

    zone[0] = init_zone("img/maps/map0.png", 0, 0);
    zone[1] = init_zone("img/maps/map1.png", 0, 0);
    zone[2] = init_zone("img/maps/map2.png", 0, 0);
    zone[3] = init_zone("img/maps/map3.png", 0, 0);
    zone[4] = NULL;
    return (zone);
}