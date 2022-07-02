/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** in_s.c
*/

#include "rpg.h"

static t_sprite *in_s(char *str, float x, float y, int *rect)
{
    t_sprite *sprite = malloc(sizeof(t_sprite));
    sfVector2f pos = {x, y};

    if (sprite == NULL)
        return (NULL);
    sprite->rect = malloc(sizeof(sfIntRect));
    if (sprite->rect == NULL)
        return (NULL);
    sprite->detector = 0;
    sprite->rect->top = rect[0];
    sprite->rect->left = rect[1];
    sprite->rect->width = rect[2];
    sprite->rect->height = rect[3];
    sprite->texture = sfTexture_createFromFile(str, NULL);
    sprite->sprite = sfSprite_create();
    if (!sprite->sprite || !sprite->texture)
        return (NULL);
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, pos);
    return (sprite);
}

t_sprite **init_val(void)
{
    t_sprite **sp = malloc(sizeof(t_sprite *) * 13);

    if (!sp) return (NULL);
    sp[0] = in_s("img/p/zombie/front.png", 900, 900, (int[4]) {0, 0, 22.5, 22});
    sp[1] = in_s("img/p/person1.png", 1500, 700, (int[4]) {0, 0, 16, 16});
    sp[2] = in_s("img/p/zombie/front.png", 351, 150, (int[4]) {0, 0, 22.5, 22});
    sp[3] = in_s("img/p/zombie/front.png", 351, 150, (int[4]) {0, 0, 22.5, 22});
    sp[4] = in_s("img/p/zombie/front.png", 351, 150, (int[4]) {0, 0, 22.5, 22});
    sp[5] = in_s("img/maps/start.png", 0, 0, (int[4]) {0, 0, 0, 0});
    sp[6] = in_s("img/maps/how_to.png", 0, 0, (int[4]) {0, 0, 0, 0});
    sp[7] = in_s("img/p/life.png", 0, 0, (int[4]) {0, 0, 500, 197});
    sp[8] = in_s("img/p/zombie/front.png", 700, 400, (int[4]) {0, 0, 22.5, 22});
    sp[9] = in_s("img/p/zombie/front.png", 600, 800, (int[4]) {0, 0, 22.5, 22});
    sp[10] = in_s("img/p/zombie/front.png", 700, 400, (int[4])
        {0, 0, 22.5, 22});
    sp[11] = in_s("img/p/zombie/front.png", 786, 925, (int[4])
        {0, 0, 22.5, 22});
    sp[12] = NULL;
    sprite_size(sp);
    return (sp);
}
