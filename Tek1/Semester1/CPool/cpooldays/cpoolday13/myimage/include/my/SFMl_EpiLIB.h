/*
** EPITECH PROJECT, 2021
** SFML_EpiLIB
** File description:
** Library of the graphics SFML
*/

#include <SFML/Graphics.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct framebuffer_s
{
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
} framebuffer_t;
