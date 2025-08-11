/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** Display the doors
*/

#include <stdlib.h>
#include "defender.h"



void display_door(gameloop_t *gameloop)
{
    sfRenderWindow_drawSprite(gameloop->window, gameloop->door1.sprite, NULL);
    sfRenderWindow_drawSprite(gameloop->window, gameloop->door2.sprite, NULL);
}
