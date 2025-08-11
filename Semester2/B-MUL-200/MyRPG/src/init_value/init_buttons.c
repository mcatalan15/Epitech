/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** init_buttons1
*/

#include "rpg.h"

int init_button_play(background *back, int x, int y, t_music *music)
{
    sfVector2f rect_position = {back->rectx_play, back->recty_play};

    back->font = sfFont_createFromFile("img/font/Minecraft.ttf");
    back->play = sfText_create();
    sfText_setString(back->play, "PLAY");
    sfText_setFont(back->play, back->font);
    sfText_setCharacterSize(back->play, 100);
    back->mousePosition = sfMouse_getPositionRenderWindow(back->window);
    back->rectx_play = x;
    back->recty_play = y;
    sfText_setPosition(back->play, rect_position);
    if (check_button_play(back, music) == 1)
        return (1);
    sfRenderWindow_drawText(back->window, back->play, NULL);
    return (0);
}

int init_button_quit(background *back, t_music *music)
{
    sfVector2f rect_position = {back->rectx_quit, back->recty_quit};

    back->font = sfFont_createFromFile("img/font/Minecraft.ttf");
    back->quit = sfText_create();
    sfText_setString(back->quit, "QUIT");
    sfText_setFont(back->quit, back->font);
    sfText_setCharacterSize(back->quit, 100);
    back->mousePosition = sfMouse_getPositionRenderWindow(back->window);
    back->rectx_quit = 830;
    back->recty_quit = 860;
    sfText_setPosition(back->quit, rect_position);
    if (check_button_quit(back, music) == 1)
        return (1);
    sfRenderWindow_drawText(back->window, back->quit, NULL);
    return (0);
}

int init_button_how_to(background *back, int x, int y, t_music *music)
{
    sfVector2f rect_position = {back->rectx_how, back->recty_how};

    back->font = sfFont_createFromFile("img/font/Minecraft.ttf");
    back->how = sfText_create();
    sfText_setString(back->how, "HOW TO PLAY");
    sfText_setFont(back->how, back->font);
    sfText_setCharacterSize(back->how, 100);
    back->mousePosition = sfMouse_getPositionRenderWindow(back->window);
    back->rectx_how = x;
    back->recty_how = y;
    sfText_setPosition(back->how, rect_position);
    if (check_button_how_to(back, music) == 1)
        return (1);
    sfRenderWindow_drawText(back->window, back->how, NULL);
    return (0);
}