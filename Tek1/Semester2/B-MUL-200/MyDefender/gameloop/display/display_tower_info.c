/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** display_tower_info
*/

#include "defender.h"

void display_tower_info(sfRenderWindow *win, tower_info_t info)
{
    sfRenderWindow_drawText(win, info.txt_level.text, NULL);
    sfRenderWindow_drawText(win, info.txt_atk_spd.text, NULL);
    sfRenderWindow_drawText(win, info.txt_attack.text, NULL);
    sfRenderWindow_drawText(win, info.txt_range.text, NULL);
    sfRenderWindow_drawText(win, info.txt_slow.text, NULL);
}