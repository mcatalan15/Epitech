/*
** EPITECH PROJECT, 2021
** Image.c
** File description:
** Display Image
*/

#include "SFMl_EpiLIB.h"

sfRenderWindow *my_window()
{
    sfRenderWindow *window;
    sfVideoMode video;
    sfEvent evnt;
    sfTexture *ImageT = sfTexture_createFromFile("image_marc.bmp", NULL);
    sfSprite *ImageS = sfSprite_create();

    video.width = 800;
    video.height = 600;
    video.bitsPerPixel = 32;

    window = sfRenderWindow_create(video, "My Exercice", sfDefaultStyle, NULL);

    while (sfRenderWindow_isOpen(window)){
        sfSprite_setTexture(ImageS, ImageT, sfFalse);
        sfRenderWindow_drawSprite(window, ImageS, NULL);
        sfRenderWindow_display(window);
        while (sfRenderWindow_pollEvent(window, &evnt)) {
            if (evnt.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
        }
    }
    sfRenderWindow_destroy(window);
    return (0);
}

int main ()
{
    my_window();
    return (0);
}
