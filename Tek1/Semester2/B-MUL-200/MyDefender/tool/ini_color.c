/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** create_color
*/

#include "defender.h"

sfColor ini_color(int r, int g, int b, int a)
{
    sfColor color;
    color.r = r;
    color.g = g;
    color.b = b;
    color.a = a;
    return (color);
}
