/*
** EPITECH PROJECT, 2022
** display_end_menu.c
** File description:
** displays the end menu
*/

#include "defender.h"
#include "end_menu.h"

int display_end_menu(sfRenderWindow *win, end_menu_t data, gameloop_t game)
{
    sfRenderWindow_clear(win, sfBlack);
    for (int i = 0 ; data.button[i].sprite ; i++)
        display_button(win, data.button[i]);
    sfRenderWindow_drawText(win, data.score_txt, NULL);
    sfRenderWindow_drawText(win, data.game_over_txt, NULL);
    display_map(game.window, game.map, game.tower_map);
    display_door(&game);
    display_enemy(&game);
    display_twr(game.window, game.map, game.tower_map);
    display_gui(&game);
    display_text(&game);
    display_drag(&game);
    display_tower_info(game.window, game.tower_info);
    sfRenderWindow_display(win);
    return (SUCCESS);
}
