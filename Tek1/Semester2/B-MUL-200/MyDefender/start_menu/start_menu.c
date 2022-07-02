/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** start_menu
*/

#include <stdlib.h>
#include <math.h>
#include "defender.h"
#include "start_menu.h"
#include "img_data.h"

static int display_menu(sfRenderWindow *win, start_menu_t menu)
{
    display_map(win, menu.map, menu.tower);
    for (int i = 0 ; menu.button_array[i].sprite ; i++)
        display_button(win, menu.button_array[i]);
    sfRenderWindow_drawSprite(win, menu.thumbnail.sprite, NULL);
    return (SUCCESS);
}

int start_menu(sfRenderWindow *win)
{
    start_menu_t all;

    if (set_start_menu(&all) == ERROR)
        return (ERROR);
    while (sfRenderWindow_isOpen(win)) {
        sfRenderWindow_clear(win, sfWhite);
        display_menu(win, all);
        if (event_start_menu(win, &all) == ERROR)
            sfRenderWindow_close(win);
        sfRenderWindow_display(win);
    }
    free_start_menu(all);
    return (SUCCESS);
}