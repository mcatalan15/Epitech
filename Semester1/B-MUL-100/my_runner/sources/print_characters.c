/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

void print_character2(t_r_struct *r_struct)
{
    sfSprite_setPosition(r_struct->character, r_struct->icon_pos);
    if (r_struct->event.key.code == 115) {
        r_struct-> icon_pos = (sfVector2f) {300, 630};
        sfSprite_setPosition(r_struct->char_bend, r_struct->icon_pos);
        sfRenderWindow_drawSprite(r_struct->window, r_struct->char_bend, NULL);

    }
    else {
        r_struct-> icon_pos = (sfVector2f) {300, 600};
        sfSprite_setPosition(r_struct->character, r_struct->icon_pos);
        sfSprite_setTextureRect(r_struct->character, r_struct->icon_selection);
        r_struct->time = sfClock_getElapsedTime(r_struct->clock);
        r_struct-> icon_pos = sfSprite_getPosition(r_struct->character);
        if (sfTime_asSeconds(r_struct->time) > 0.2) {
            change_charcter(&r_struct-> icon_selection);
            sfClock_restart(r_struct-> clock);
        }
        sfRenderWindow_drawSprite(r_struct->window, r_struct->character, NULL);
    }
}

void print_character(t_r_struct *r_struct)
{
    if (r_struct->event.key.code != 119) {
        if (r_struct->icon_pos.y < 600) {
            r_struct->jump = 0;
            sfSprite_setPosition(r_struct->character, r_struct->icon_pos);
            sfSprite_move(r_struct->character, r_struct->icon_down);
            r_struct->icon_pos = sfSprite_getPosition(r_struct->character);
            sfRenderWindow_drawSprite(r_struct->window, r_struct->character, NULL);
        }
        else
            print_character2(r_struct);
    }
    else if (r_struct->event.key.code == 119)
        print_charcter3(r_struct);
}

void print_charcter3(t_r_struct *r_struct)
{
    jump_sound(r_struct);
    if (r_struct->icon_pos.y > 490) {
        sfSprite_setPosition(r_struct->character, r_struct->icon_pos);
        sfSprite_move(r_struct->character, r_struct->icon_up);
        r_struct->icon_pos = sfSprite_getPosition(r_struct->character);
        sfRenderWindow_drawSprite(r_struct->window, r_struct->character, NULL);
    }
    else
        sfRenderWindow_drawSprite(r_struct->window, r_struct->character, NULL);
}
