/*
** EPITECH PROJECT, 2022
** set_base.c
** File description:
** set the basic elements
*/

#include "defender.h"

static const char *MUSIC = "img2/sng/ni_mas_ni_menos.wav";

int set_basic(base_t *base)
{
    if (set_window(&base->window) == ERROR)
        return (ERROR);
    base->path_map = "map";
    base->music = sfMusic_createFromFile(MUSIC);
    sfMusic_setLoop(base->music, sfTrue);
    return (SUCCESS);
}
