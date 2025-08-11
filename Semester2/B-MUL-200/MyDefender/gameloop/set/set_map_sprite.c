/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** create_spirte
*/

#include "defender.h"

my_sprite_t set_grass1(sfVector2f pos)
{
    my_sprite_t sprite;
    sfTexture *texture;

    texture = sfTexture_createFromFile("img2/floor/floor.png", NULL);
    sprite.sprite = sfSprite_create();
    sprite.solid = true;
    sprite.animation = false;
    sprite.rect = ini_rect(0, 0, TILE_SIZE, TILE_SIZE);
    sprite.type = 1;
    sfSprite_setTexture(sprite.sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite.sprite, sprite.rect);
    sfSprite_setPosition(sprite.sprite, pos);
    return (sprite);
}

my_sprite_t set_grass2(sfVector2f pos)
{
    my_sprite_t sprite;
    sfTexture *texture;

    texture = sfTexture_createFromFile("img2/floor/floor.png", NULL);
    sprite.sprite = sfSprite_create();
    sprite.solid = true;
    sprite.animation = false;
    sprite.rect = ini_rect(83, 0, TILE_SIZE, TILE_SIZE);
    sprite.type = 2;
    sfSprite_setTexture(sprite.sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite.sprite, sprite.rect);
    sfSprite_setPosition(sprite.sprite, pos);
    return (sprite);
}

my_sprite_t set_ground(sfVector2f pos)
{
    my_sprite_t sprite;
    sfTexture *texture;

    texture = sfTexture_createFromFile("img2/floor/floor.png", NULL);
    sprite.sprite = sfSprite_create();
    sprite.solid = false;
    sprite.animation = false;
    sprite.rect = ini_rect(332, 0, TILE_SIZE, TILE_SIZE);
    sprite.type = 3;
    sfSprite_setTexture(sprite.sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite.sprite, sprite.rect);
    sfSprite_setPosition(sprite.sprite, pos);
    return (sprite);
}

my_sprite_t set_door1(sfVector2f pos)
{
    my_sprite_t sprite;
    sfTexture *texture;

    texture = sfTexture_createFromFile("img2/floor/floor.png", NULL);
    sprite.sprite = sfSprite_create();
    sprite.solid = false;
    sprite.animation = false;
    sprite.rect = ini_rect(332, 0, TILE_SIZE, TILE_SIZE);
    sprite.type = 4;
    sfSprite_setTexture(sprite.sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite.sprite, sprite.rect);
    sfSprite_setPosition(sprite.sprite, pos);
    return (sprite);
}

my_sprite_t set_door2(sfVector2f pos)
{
    my_sprite_t sprite;
    sfTexture *texture;

    texture = sfTexture_createFromFile("img2/floor/floor.png", NULL);
    sprite.sprite = sfSprite_create();
    sprite.solid = false;
    sprite.animation = false;
    sprite.rect = ini_rect(332, 0, TILE_SIZE, TILE_SIZE);
    sprite.type = 5;
    sfSprite_setTexture(sprite.sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite.sprite, sprite.rect);
    sfSprite_setPosition(sprite.sprite, pos);
    return (sprite);

}
