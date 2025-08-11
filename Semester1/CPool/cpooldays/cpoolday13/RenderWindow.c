/*
** EPITECH PROJECT, 2021
** sfRenderWindow
** File description:
** Create a window and let it open
*/

#include "GraphicalLIB.h"

framebuffer_t * framebuffer_create (unsigned int width, unsigned int height)
{
    framebuffer_t *fbr = malloc (sizeof(framebuffer_t));

    fbr->heigth = height;
    fbr->width = width;
    fbr->pixels = malloc(width * height * 4);
    return (fbr);
}

void put_pixels (framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color)
{
    int pixel_pos = ((y * framebuffer->width) + x) * 4;

    framebuffer->pixels[pixel_pos] = color.r;
    framebuffer->pixels[pixel_pos + 1] = color.g;
    framebuffer->pixels[pixel_pos + 2] = color.b;
    framebuffer->pixels[pixel_pos + 3] = color.a;
}

void display_pixel (framebuffer_t *fbr)
{
    put_pixels(fbr, 10, 10, sfRed);
    put_pixels(fbr, 100, 100, sfRed);
    put_pixels(fbr, 250, 400, sfRed);
}

void draw_square (framebuffer_t *framebuffer, sfVector2u position, unsigned int size, sfColor color)
{
    unsigned int x = position.x;
    unsigned int y = position.y;
    unsigned int final_posx = position.x + size;
    unsigned int final_posy = position.y + size;

    while (y <= final_posy) {
        while (x <= final_posx) {
            put_pixels (framebuffer, x, y, color);
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
    framebuffer_t *fbr = framebuffer_create(800, 600);
    sfVector2u square_pos = {100, 100};
    
    video.width = 800;
    video.height = 600;
    video.bitsPerPixel = 32;

    task01 = sfRenderWindow_create(video, "My Task01", sfDefaultStyle, NULL);

    while (sfRenderWindow_isOpen(task01)){
        display_pixel(fbr);
        sfTexture_updateFromPixels(Texture, fbr->pixels, 800, 600, 0, 0);
        sfSprite_setTexture(Sprite, Texture, sfFalse);
        sfRenderWindow_drawSprite(task01, Sprite, NULL);
        draw_square(fbr, square_pos, 10, sfBlue);
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
