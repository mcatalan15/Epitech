/*
** EPITECH PROJECT, 2022
** create_btns.c
** File description:
** creation of the buttons
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

sfSprite *create_btnlvl1(void)
{
    sfTexture *texturebuttonlevel1 = sfTexture_createFromFile
    ("./img/easy_button.png", NULL);
    sfSprite *Spritebuttonlevel1 = sfSprite_create();
    sfSprite_setTexture (Spritebuttonlevel1, texturebuttonlevel1, 0);
    return (Spritebuttonlevel1);
}

sfSprite *create_btnlvl2(void)
{
    sfTexture *texturebuttonlevel2 = sfTexture_createFromFile
    ("./img/medium_button.png", NULL);
    sfSprite *Spritebuttonlevel2 = sfSprite_create();
    sfSprite_setTexture (Spritebuttonlevel2, texturebuttonlevel2, 0);
    return (Spritebuttonlevel2);
}

sfSprite *create_btnlvl3(void)
{
    sfTexture *texturebutlevel3 = sfTexture_createFromFile
    ("./img/hard_button.png", NULL);
    sfSprite *Spritebutlevel3 = sfSprite_create();
    sfSprite_setTexture (Spritebutlevel3, texturebutlevel3, 0);
    return (Spritebutlevel3);
}