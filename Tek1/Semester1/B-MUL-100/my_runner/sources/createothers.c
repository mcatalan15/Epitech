/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

sfSprite *create_gover(void)
{
    sfTexture *texture_gover = sfTexture_createFromFile
    ("./img/game_over_fary.png", NULL);
    sfSprite *sprite_gover = sfSprite_create();
    sfSprite_setTexture (sprite_gover, texture_gover, 0);
    return (sprite_gover);
}

sfSprite *create_charcter(void)
{
    sfTexture *texture_character = sfTexture_createFromFile
    ("./img/astronaut.png", NULL);
    sfSprite *icon_selection = sfSprite_create();
    sfSprite_setTexture (icon_selection, texture_character, 0);
    return (icon_selection);
}
