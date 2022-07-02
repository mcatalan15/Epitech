/*
** EPITECH PROJECT, 2021
** sfRenderWindow
** File description:
** Create a window and let it open
*/

#include "SFMl_EpiLIB.h"

framebuffer_t * framebuffer_create (unsigned int width, unsigned int height)
{
    framebuffer_t *fb = malloc (sizeof(framebuffer_t));

    fb->height = height;
    fb->width = width;
    fb->pixels = malloc(width * height * 4);
    return (fb);
}

void put_pixels (framebuffer_t *frameb, unsigned int x, unsigned int y, sfColor color)
{
    int pixel_pos = ((y * frameb->width) + x) * 4;

    frameb->pixels[pixel_pos] = color.r;
    frameb->pixels[pixel_pos + 1] = color.g;
    frameb->pixels[pixel_pos + 2] = color.b;
    frameb->pixels[pixel_pos + 3] = color.a;
}

void display_pixel (framebuffer_t *fb)
{
    put_pixels(fb, 10, 10, sfRed);
    put_pixels(fb, 100, 100, sfRed);
    put_pixels(fb, 250, 400, sfRed);
}

void draw_square (framebuffer_t *frameb, sfVector2u position, unsigned int size, sfColor color)
{
    unsigned int x = position.x;
    unsigned int y = position.y;
    unsigned int fix = position.x + size;
    unsigned int fiy = position.y + size;

    while (y <= fiy) {
        while (x <= fix) {
            put_pixels (frameb, x, y, color);
            x++;
        }
        x = position.x;
        y++;
    }
}

sfRenderWindow *my_window()
{
    sfRenderWindow *task01;
    sfVideoMode video;
    sfEvent evnt;
    sfTexture *Texture = sfTexture_create(800, 600);
    sfSprite *Sprite = sfSprite_create();
    framebuffer_t *frameb = framebuffer_create(800, 600);
    sfVector2u square_pos = {100, 100};
    
    video.width = 800;
    video.height = 600;
    video.bitsPerPixel = 32;

    task01 = sfRenderWindow_create(video, "My Task01", sfDefaultStyle, NULL);

    while (sfRenderWindow_isOpen(task01)){
        display_pixel(frameb);
        sfTexture_updateFromPixels(Texture, frameb->pixels, 800, 600, 0, 0);
        sfSprite_setTexture(Sprite, Texture, sfFalse);
        sfRenderWindow_drawSprite(task01, Sprite, NULL);
        draw_square(frameb, square_pos, 10, sfBlue);
        sfRenderWindow_display(task01);
        while (sfRenderWindow_pollEvent(task01, &evnt)) {
            if (evnt.type == sfEvtClosed) {
                sfRenderWindow_close(task01);
            }
        }
    }
    sfRenderWindow_destroy(task01);
    return (0);
}

int main ()
{
    my_window();
    return (0);
}
