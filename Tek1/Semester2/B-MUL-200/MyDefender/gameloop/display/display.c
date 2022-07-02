/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** display
*/

#include "defender.h"

int display_gameloop(gameloop_t *gameloop)
{
    sfRenderWindow_clear(gameloop->window, sfBlack);
    display_map(gameloop->window, gameloop->map, gameloop->tower_map);
    display_po(gameloop->window, gameloop->map, gameloop->tower_map);
    display_door(gameloop);
    display_enemy(gameloop);
    display_twr(gameloop->window, gameloop->map, gameloop->tower_map);
    display_gui(gameloop);
    display_text(gameloop);
    display_drag(gameloop);
    display_tower_info(gameloop->window, gameloop->tower_info);
    sfRenderWindow_display(gameloop->window);
}
