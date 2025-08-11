/*
** EPITECH PROJECT, 2021
** GraphicalLIB.h
** File description:
** Intro to csfm
*/

#include <SFML/Graphics.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct framebuffer_s
{
    unsigned int width;
    unsigned int heigth;
    sfUint8 *pixels;
} framebuffer_t;
