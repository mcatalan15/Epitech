/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** free_gameloop
*/

#include "defender.h"

void free_gameloop(gameloop_t gameloop)
{
    free_music(gameloop.music);
}