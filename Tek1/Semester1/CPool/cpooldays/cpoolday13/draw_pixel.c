/*
** EPITECH PROJECT, 2021
** draw_pixel.c
** File description:
** Displays a pixel creating an array and framebuffer
*/

#include <SFML/Graphics/RenderWindow.h>

int main ()
{
    sfRenderWindow *window;
    t_framebuffer fb;
    sfTexture *texture;
    sfSprite *sprite;

    window = createMyWindow(800, 600);
    fb = framebuffer_create(800, 600);
    texture = sfTexture_create(800, 600);
    sprite = sfSprite_create();

    while (sfRenderWindow_isOpen8window))
    {
        framebuffer_drawSquare(fb, 200, &sfRed);
        sfTexture_updateFromPixels(texture, fb -> pixels, 800, 600, 0, 0);
        sfSripte_setTexture(sprite, texture, sfFalse);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfrenderWindow_display(window);
    }
sfRenderWindow_destro(window);
framebuffer_destroy(fb);
sfTexture_destroy(texture);
sfSprite_destroy(sprite);
return (0);
}
