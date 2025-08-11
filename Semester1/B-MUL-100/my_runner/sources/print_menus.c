/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

void print_gover(t_r_struct **r_struct)
{
    sfMusic_pause((*r_struct)->mandanga_song);
    if (!(*r_struct)->dead) {
        sfSound_play((*r_struct)->carabirubi_song);
        (*r_struct)->dead = 1;
    }
    (*r_struct)->pos_s_label = (sfVector2f) {600, 400};
    (*r_struct)->pos_s_num_num = (sfVector2f) {800, 400};
    sfText_setString((*r_struct)->textmsg, "Score:");
    sfText_setColor((*r_struct)->textmsg, sfColor_fromRGB(255, 255, 255));
    sfText_setPosition((*r_struct)->textmsg, (*r_struct)->pos_s_label);
    sfText_setColor((*r_struct)->text, sfColor_fromRGB(255, 255, 255));
    sfText_setPosition((*r_struct)->text, (*r_struct)->pos_s_num_num);
    sfRenderWindow_drawSprite((*r_struct) -> window, (*r_struct) -> 
    gover, NULL);
    sfRenderWindow_drawText((*r_struct)->window, (*r_struct)->text, NULL);
    sfRenderWindow_drawText((*r_struct)->window, (*r_struct)->textmsg, NULL);
    sfRenderWindow_display((*r_struct) -> window);
}

void show_shots(sfRenderWindow *window, sfSprite *heart,
int shots, sfVideoMode video_mode)
{
    sfVector2f pos_shots = {10, 10};

    while (shots > 0) {
        sfSprite_setPosition(heart, pos_shots);
        sfRenderWindow_drawSprite(window, heart, NULL);
        pos_shots.x += 70;
        shots--;
    }
}

void print_menu(t_r_struct **r_struct)
{
    sfRenderWindow_drawSprite((*r_struct) -> window, (*r_struct) -> 
    background, NULL);
    sfRenderWindow_drawSprite((*r_struct) -> window, (*r_struct) -> textlevels, NULL);
    (*r_struct) -> pbuttons.x = 350;
    (*r_struct) -> pbuttons.y += 150;
    sfSprite_setPosition((*r_struct) -> easy_button, (*r_struct) -> pbuttons);
    sfRenderWindow_drawSprite((*r_struct) -> window, (*r_struct) -> easy_button, NULL);
    (*r_struct) -> pbuttons.x = 357;
    (*r_struct) -> pbuttons.y += 200;
    sfSprite_setPosition((*r_struct) -> medium_button, (*r_struct) -> pbuttons);
    sfRenderWindow_drawSprite((*r_struct) -> window, (*r_struct) -> medium_button, NULL);
    (*r_struct) -> pbuttons.x = 357;
    (*r_struct) -> pbuttons.y += 200;
    sfSprite_setPosition((*r_struct) -> hard_button, (*r_struct) -> pbuttons);
    sfRenderWindow_drawSprite((*r_struct) -> window, (*r_struct) -> hard_button, NULL);
    sfRenderWindow_display((*r_struct) -> window);
    (*r_struct) -> pbuttons.y = 0;
    (*r_struct) -> level = analayse_events(&(*r_struct), 1);
    if (!(*r_struct)->level)
        sfSound_play((*r_struct)->sound_select);
}
