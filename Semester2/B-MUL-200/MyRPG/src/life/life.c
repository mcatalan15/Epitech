/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** ui
*/

#include <unistd.h>
#include "rpg.h"

void full_life(t_sprite **sprite, background *back)
{
    sprite[7]->rect->top = 0;
    sfSprite_setTextureRect(sprite[7]->sprite, *sprite[7]->rect);
    sfRenderWindow_drawSprite(back->window, sprite[7]->sprite, NULL);
}

void less_one_heart(t_sprite **sprite, background *back)
{
    sprite[7]->rect->top = 197;
    sfSprite_setTextureRect(sprite[7]->sprite, *sprite[7]->rect);
    sfRenderWindow_drawSprite(back->window, sprite[7]->sprite, NULL);
}

void less_two_heart(t_sprite **sprite, background *back)
{
    sprite[7]->rect->top = 394;
    sfSprite_setTextureRect(sprite[7]->sprite, *sprite[7]->rect);
    sfRenderWindow_drawSprite(back->window, sprite[7]->sprite, NULL);
}

void less_three_heart(t_sprite **sprite, background *back)
{
    sprite[7]->rect->top = 591;
    sfSprite_setTextureRect(sprite[7]->sprite, *sprite[7]->rect);
    sfRenderWindow_drawSprite(back->window, sprite[7]->sprite, NULL);
}

int load_life(background *back, t_sprite **sprite)
{
    void (*fun_arr_ptr[])(t_sprite **, background *back) = {full_life,
                    less_one_heart, less_two_heart, less_three_heart};

    if (sprite[7]->detector == 4) {
        write(1, "GAME OVER\n", 10);
        write(1, "You've made: ", 13);
        my_put_nbr(back->step_max);
        write(1, " steps.\n", 8);
        write(1, "You've killed: ", 15);
        my_put_nbr(back->enemies_max);
        write(1, " enemies.\n", 11);
        return (1);
    }
    (*fun_arr_ptr[sprite[7]->detector])(sprite, back);
    return (0);
}