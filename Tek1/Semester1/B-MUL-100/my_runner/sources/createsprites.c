/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

sfSprite *create_txtlevel(void)
{
    sfTexture *texturelevel = sfTexture_createFromFile
    ("./img/Dificulty_fary.png", NULL);
    sfSprite *Spritelevel = sfSprite_create();
    sfSprite_setTexture (Spritelevel, texturelevel, 0);
    return (Spritelevel);
}

sfSprite *create_bend(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./img/astronaut_down.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture (sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_shots(void)
{
    sfTexture *texture_shots = sfTexture_createFromFile
    ("./img/shoot_life.png", NULL);
    sfSprite *sprite_shots = sfSprite_create();
    sfSprite_setTexture (sprite_shots, texture_shots, 0);
    return (sprite_shots);
}

sfSprite *create_superman(void)
{
    sfTexture *texture_superman = sfTexture_createFromFile
    ("./img/superman.png", NULL);
    sfSprite *sprite_superman = sfSprite_create();
    sfSprite_setTexture (sprite_superman, texture_superman, 0);
    return (sprite_superman);
}

sfSprite *create_jump(void)
{
    sfTexture *texture_jump = sfTexture_createFromFile
    ("./img/astronaut_jump.png", NULL);
    sfSprite *sprite_jump = sfSprite_create();
    sfSprite_setTexture (sprite_jump, texture_jump, 0);
    return (sprite_jump);
}
