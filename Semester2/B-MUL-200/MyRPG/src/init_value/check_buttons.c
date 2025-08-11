/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** check_buttons
*/

#include "rpg.h"

int check_button_play(background *back, t_music *music)
{
    if ((back->mousePosition.x >= back->rectx_play && back->mousePosition.y >=
    back->recty_play) && (back->mousePosition.x <= back->rectx_play + 200
    && back->mousePosition.y <= back->recty_play + 100)) {
        sfText_setColor(back->play, sfYellow);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            play_sound(music);
            return (1);
        }
    }
    return (0);
}

int check_button_quit(background *back, t_music *music)
{
    if ((back->mousePosition.x >= back->rectx_quit && back->mousePosition.y >=
    back->recty_quit) && (back->mousePosition.x <= back->rectx_quit + 200
    && back->mousePosition.y <= back->recty_quit + 100)) {
        sfText_setColor(back->quit, sfYellow);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            play_sound(music);
            return (1);
        }
    }
    return (0);
}

int check_button_how_to(background *back, t_music *music)
{
    if ((back->mousePosition.x >= back->rectx_how && back->mousePosition.y >=
    back->recty_how) && (back->mousePosition.x <= back->rectx_how + 640
    && back->mousePosition.y <= back->recty_how + 100)) {
        sfText_setColor(back->how, sfYellow);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            play_sound(music);
            return (1);
        }
    }
    return (0);
}
