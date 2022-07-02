/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** data gestion for gameloop
*/

#include "defender.h"

int data(gameloop_t *gameloop)
{
    spawn(gameloop);
    move_enemy(gameloop);
    scale_button(gameloop);
    tool_bar_data(gameloop);
    mouse_move_drag(gameloop->window, gameloop);
    tower_attack(gameloop->tower_map, gameloop->enemy);
    die_enemy(gameloop, &(gameloop->enemy), gameloop->enemy_tex);
    despawn(gameloop);
    return (SUCCESS);
}
