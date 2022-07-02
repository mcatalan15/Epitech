/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** Center the text
*/

#include "defender.h"

void set_origin_text(sfText *text)
{
    sfFloatRect rect = sfText_getGlobalBounds(text);
    sfVector2f pos;

    pos.y = 0;
    pos.x = rect.width / 2;
    sfText_setOrigin(text, pos);
}
