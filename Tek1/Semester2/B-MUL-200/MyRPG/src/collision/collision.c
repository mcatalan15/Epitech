/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** collision
*/

#include "rpg.h"

static t_collision *init_images(char *str)
{
    t_collision *image = malloc(sizeof(t_collision));

    if (image == NULL)
        return (NULL);
    image->image = sfImage_createFromFile(str);
    if (!image->image)
        return (NULL);
    return (image);
}

t_collision **init_image(void)
{
    t_collision **image = malloc(sizeof(background *) * 6);

    if (!image)
        return (NULL);
    image[0] = init_images("img/maps/collision0.png");
    image[1] = init_images("img/maps/collision0.png");
    image[2] = init_images("img/maps/collision1.png");
    image[3] = init_images("img/maps/collision2.png");
    image[4] = init_images("img/maps/collision3.png");
    image[5] = NULL;
    return (image);
}