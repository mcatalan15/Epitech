/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** pause
*/

#include "rpg.h"

int color_bmenu(background *back)
{
    if ((back->mousePosition.x >= back->rectx_bmenu && back->mousePosition.y >=
    back->recty_bmenu) && (back->mousePosition.x <= back->rectx_bmenu + 200
    && back->mousePosition.y <= back->recty_bmenu + 100)) {
        sfText_setColor(back->play, sfYellow);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            return (1);
        }
    }
    return (0);
}

int init_button_menu_game(background *back)
{
    sfVector2f rect_position = {back->rectx_bmenu, back->recty_bmenu};

    back->font = sfFont_createFromFile("img/font/Minecraft.ttf");
    back->play = sfText_create();
    sfText_setString(back->play, "MENU");
    sfText_setFont(back->play, back->font);
    sfText_setCharacterSize(back->play, 100);
    back->mousePosition = sfMouse_getPositionRenderWindow(back->window);
    back->rectx_bmenu = 100;
    back->recty_bmenu = 660;
    sfText_setPosition(back->play, rect_position);
    if (color_bmenu(back) == 1)
        return (1);
    sfRenderWindow_drawText(back->window, back->play, NULL);
    return (0);
}