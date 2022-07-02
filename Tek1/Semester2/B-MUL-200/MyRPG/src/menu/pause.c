/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** pause
*/

#include "rpg.h"

int color_resume(background *bac)
{
    if ((bac->mousePosition.x >= bac->rectx_resume && bac->mousePosition.y >=
    bac->recty_resume) && (bac->mousePosition.x <= bac->rectx_resume
    + 330 && bac->mousePosition.y <= bac->recty_resume + 100)) {
        sfText_setColor(bac->play, sfYellow);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            return (1);
        }
    }
    return (0);
}

int init_button_resume(background *bac)
{
    sfVector2f rect_position = {bac->rectx_resume, bac->recty_resume};

    bac->font = sfFont_createFromFile("img/font/Minecraft.ttf");
    bac->play = sfText_create();
    sfText_setString(bac->play, "RESUME");
    sfText_setFont(bac->play, bac->font);
    sfText_setCharacterSize(bac->play, 100);
    bac->mousePosition = sfMouse_getPositionRenderWindow(bac->window);
    bac->rectx_resume = 770;
    bac->recty_resume = 260;
    sfText_setPosition(bac->play, rect_position);
    if (color_resume(bac) == 1)
        return (1);
    sfRenderWindow_drawText(bac->window, bac->play, NULL);
    return (0);
}

int color_quit(background *back)
{
    if ((back->mousePosition.x >= back->rectx_play && back->mousePosition.y >=
    back->recty_play) && (back->mousePosition.x <= back->rectx_play + 200
    && back->mousePosition.y <= back->recty_play + 100)) {
        sfText_setColor(back->play, sfYellow);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            return (1);
        }
    }
    return (0);
}

int init_button_quit_game(background *back)
{
    sfVector2f rect_position = {back->rectx_play, back->recty_play};

    back->font = sfFont_createFromFile("img/font/Minecraft.ttf");
    back->play = sfText_create();
    sfText_setString(back->play, "QUIT");
    sfText_setFont(back->play, back->font);
    sfText_setCharacterSize(back->play, 100);
    back->mousePosition = sfMouse_getPositionRenderWindow(back->window);
    back->rectx_play = 860;
    back->recty_play = 660;
    sfText_setPosition(back->play, rect_position);
    if (color_quit(back) == 1)
        return (1);
    sfRenderWindow_drawText(back->window, back->play, NULL);
    return (0);
}