#include "./../includes/library.h"
#include "./../includes/structs.h"

void print_bgrnd1(t_r_struct *r_struct)
{
    sfRenderWindow_clear(r_struct->window, sfBlack);
    sfSprite_setPosition(r_struct->background, r_struct->
    pos_background);
    sfSprite_move(r_struct->background, r_struct->velocity_background);
    r_struct->pos_background = sfSprite_getPosition(r_struct->background);
    sfRenderWindow_drawSprite(r_struct->window, r_struct->background, NULL);
    sfSprite_setPosition(r_struct->background, r_struct->pos_background_2);
    sfSprite_move(r_struct->background, r_struct->velocity_background);
    r_struct->pos_background_2 = sfSprite_getPosition(r_struct->background);
    sfRenderWindow_drawSprite(r_struct->window, r_struct->background, NULL);
    if (r_struct->pos_background.x <= -5000) {
    r_struct->pos_background.x = r_struct->pos_background_2.x;
    r_struct->pos_background_2.x = 1200;
    }
}

void print_bgrnd2(t_r_struct *r_struct)
{
    sfSprite_setPosition(r_struct->background2, r_struct->pos_background2);
    sfSprite_move(r_struct->background2, r_struct->velocity_background2);
    r_struct->pos_background2 = sfSprite_getPosition(r_struct->background2);
    sfRenderWindow_drawSprite(r_struct->window, r_struct->background2, NULL);
    sfSprite_setPosition(r_struct->background2, r_struct->pos_background2_2);
    sfSprite_move(r_struct->background2, r_struct->velocity_background2);
    r_struct->pos_background2_2 = sfSprite_getPosition(r_struct->background2);
    sfRenderWindow_drawSprite(r_struct->window, r_struct->background2, NULL);
    if (r_struct->pos_background2.x <= -1240) {
        r_struct->pos_background2.x = r_struct->pos_background2_2.x;
        r_struct->pos_background2_2.x = 1280;
    }
}