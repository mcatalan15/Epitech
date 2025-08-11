/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** defender
*/

#include <stdio.h>
#include "defender.h"

int defender(int argc, char **argv)
{
    base_t base;

    if (set_basic(&base) == ERROR)
        return (ERROR);
    sfMusic_play(base.music);
    if (start_menu(base.window) == ERROR)
        return (ERROR);
    sfMusic_destroy(base.music);
    return (SUCCESS);
}
