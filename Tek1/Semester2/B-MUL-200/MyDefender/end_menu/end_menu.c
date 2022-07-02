/*
** EPITECH PROJECT, 2022
** end_menu.c
** File description:
** end menu
*/

#include <stdlib.h>
#include "defender.h"
#include "end_menu.h"

int end_menu(sfRenderWindow *win, gameloop_t *gameloop)
{
    end_menu_t data;

    if (set_end_menu(&data, gameloop->score.nb) == ERROR)
        return (ERROR);
    sfMusic_play(gameloop->music.game_over);
    while (sfRenderWindow_isOpen(win) && data.button_status == 0) {
        sfRenderWindow_clear(win, sfBlack);
        end_anim(win, &data, gameloop);
        display_end_menu(win, data, *gameloop);
        if (event_end_menu(win, &data) == ERROR)
            return (ERROR);
        sfRenderWindow_display(win);
    }
    sfMusic_destroy(data.click);
    sfMusic_destroy(data.tool);
    return (data.button_status);
}
