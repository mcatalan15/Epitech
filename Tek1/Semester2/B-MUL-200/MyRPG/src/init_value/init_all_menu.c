/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** init_all_menu
*/

#include "rpg.h"

int init_back_menu(t_sprite **sprite, background *back, t_music *music)
{
    sfRenderWindow_drawSprite(back->window, sprite[5]->sprite, NULL);
    if (init_button_play(back, 830, 560, music) == 1)
        back->instance = 1;
    if (init_button_quit(back, music) == 1)
        return (1);
    if (init_button_how_to(back, 600, 710, music) == 1)
        back->instance = 64;
    return (0);
}

int init_how_to(t_sprite **sprite, background *back, t_music *music)
{
    sfRenderWindow_drawSprite(back->window, sprite[6]->sprite, NULL);
    if (init_button_play(back, 830, 200, music) == 1)
        back->instance = 1;
    return (0);
}