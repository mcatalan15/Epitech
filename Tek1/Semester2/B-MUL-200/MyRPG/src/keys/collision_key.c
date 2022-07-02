/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** collision_key
*/

#include "rpg.h"

int key_up(background *obj, t_collision **im, int ins)
{
    int i = 0;
    sfColor black = sfBlack;
    sfColor stock;

    if (((obj->x >= 1 && obj->y <= 1920) && (obj->x <= 1920 && obj->y >= 1))) {
        stock = sfImage_getPixel(im[ins]->image, (obj->x + 30), (obj->y + 55));
            if (stock.a == black.a && stock.b == black.b
            && stock.g == black.g && stock.r == black.r)
                i = 1;
            else
                i = 0;
    }
    return (i);
}

int key_left(background *obj, t_collision **im, int ins)
{
    int i = 0;
    sfColor black = sfBlack;
    sfColor stock;

    if (((obj->x >= 1 && obj->y <= 1920) && (obj->x <= 1920 && obj->y >= 1))) {
        stock = sfImage_getPixel(im[ins]->image, (obj->x + 10), (obj->y + 30));
        if (stock.a == black.a && stock.b == black.b
        && stock.g == black.g && stock.r == black.r)
            i = 1;
        else
            i = 0;
    }
    return (i);
}

int key_right(background *obj, t_collision **im, int ins)
{
    int i = 0;
    sfColor black = sfBlack;
    sfColor stock;

    if (((obj->x >= 1 && obj->y <= 1920) && (obj->x <= 1920 && obj->y >= 1))) {
        stock = sfImage_getPixel(im[ins]->image, (obj->x + 50), (obj->y + 30));
        if (stock.a == black.a && stock.b == black.b
        && stock.g == black.g && stock.r == black.r)
            i = 1;
        else
            i = 0;
    }
    return (i);
}

int key_down(background *obj, t_collision **im, int ins)
{
    int i = 0;
    sfColor black = sfBlack;
    sfColor stock;

    if (((obj->x >= 1 && obj->y <= 1920) && (obj->x <= 1920 && obj->y >= 1))) {
        stock = sfImage_getPixel(im[ins]->image, (obj->x + 30), (obj->y + 30));
        if (stock.a == black.a && stock.b == black.b
        && stock.g == black.g && stock.r == black.r)
            i = 1;
        else
            i = 0;
    }
    return (i);
}

int get_pixel(background *obj, t_sprite **sprite, t_collision **im, int ins)
{
    int (*fun_arr_ptr[])(background *, t_collision **, int) = {key_down,
                                            key_up, key_left, key_right};

    if (!im)
        return (84);
    if ((*fun_arr_ptr[(sprite[1]->detector - 10)])(obj, im, ins) == 1)
        return (1);
    return (0);
}