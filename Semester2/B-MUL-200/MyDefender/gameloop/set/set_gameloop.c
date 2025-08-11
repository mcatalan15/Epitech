/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** set gameloop elements
*/

#include <stdlib.h>
#include "defender.h"

static const char *FONT_N = "img2/GillSansUltraBold.ttf";

static int set_gameloop2(gameloop_t *gameloop)
{
    gameloop->spawn_clock = sfClock_create();
    gameloop->anim_clock = sfClock_create();
    gameloop->enemy = NULL;
    gameloop->pos_spawn = set_pos_spawn(gameloop->map);
    gameloop->enemy_tex = load_enemy_texture();
    gameloop->door1 = set_door(gameloop->map, 1);
    gameloop->door2 = set_door(gameloop->map, 2);
    gameloop->status = 0;
    gameloop->time_enemy = 3;
    gameloop->live_multi = 1;
    return (SUCCESS);
}

int set_gameloop(char *path_map, gameloop_t *gameloop)
{
    sfEvent event;

    if (load_map(path_map, &gameloop->map, &gameloop->tower_map) == ERROR)
        return (ERROR);
    if ((gameloop->button_tower = set_tower_button()) == NULL)
        return (ERROR);
    set_music(&gameloop->music);
    gameloop->gold = ini_text(FONT_N, 30, ini_vector(1760, 490));
    gameloop->score = ini_text(FONT_N, 0, ini_vector(1770, 15));
    gameloop->hp = ini_text(FONT_N, 9, ini_vector(1620, 15));
    gameloop->drag_tower = set_tower_preview();
    gameloop->tower_texture = set_tower_texture();
    gameloop->pos_tower = ini_rectangle(83, 83);
    gameloop->drag = false;
    set_tower_info(&gameloop->tower_info);
    if (set_tool_bar(&gameloop->tool_bar) == ERROR)
        return (ERROR);
    if (set_gameloop2(gameloop) == ERROR)
        return (ERROR);
    return (SUCCESS);
}
