/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

sfVector2f ini_pos(void)
{
    sfVector2f ini_pos;
    ini_pos.x = 1300;
    ini_pos.y = (rand() % (600 - 550) + 1) + 550;
    return (ini_pos);
}

int get_velocity(int level)
{
    int velocity = rand() % (15 + level * 2);
    velocity += 7 + (level * 2);
    velocity *= -1;
    return (velocity);
}

int hit_charcter (t_r_struct *r_struct)
{
    sfVector2f posActualcharacter = r_struct->icon_pos;
    sfVector2f posActualsuperman = r_struct->superman_pos;

    if (posActualcharacter.y <= posActualsuperman.y + 50
    && posActualcharacter.y >= posActualsuperman.y - 50
    && posActualcharacter.x <= posActualsuperman.x + 50
    && posActualcharacter.x >= posActualsuperman.x - 50) {;
        return (1);
    }
    return (0);
}

int levels (sfRenderWindow * window)
{
    sfVector2i pos_mouse = sfMouse_getPositionRenderWindow(window);

    if ((pos_mouse.x >= 480) && (pos_mouse.x <= 810)
    && (pos_mouse.y >= 210) && (pos_mouse.y <= 290))
        return (1);
    else if ((pos_mouse.x >= 480) && (pos_mouse.x <= 810)
    && (pos_mouse.y >= 360) && (pos_mouse.y <= 440))
        return (2);
    else if ((pos_mouse.x >= 480) && (pos_mouse.x <= 810)
    && (pos_mouse.y >= 500) && (pos_mouse.y <= 590))
        return (3);
    else
        return (0);
}

void change_charcter (sfIntRect *select_duck)
{
    select_duck -> left += 70;
    if (select_duck -> left >= 140)
        select_duck -> left = 0;
}
