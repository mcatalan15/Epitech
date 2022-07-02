/*
** EPITECH PROJECT, 2021
** test.c
** File description:
** Trying things
*/

#include "GraphicalLIB.h"



sfRenderWindow *my_window()
{
    sfRenderWindow *task01;
    sfVideoMode video;
    sfEvent evnt;
    sfTexture *Image_T = sfTexture_createFromFile("meme.bmp", NULL);
    sfSprite *Image_S = sfSprite_create();

    video.width = 800;
    video.height = 600;
    video.bitsPerPixel = 32;

    task01 = sfRenderWindow_create(video, "My Task01", sfDefaultStyle, NULL);

    while (sfRenderWindow_isOpen(task01)){
        sfSprite_setTexture(Image_S, Image_T, sfFalse);
        sfRenderWindow_drawSprite(task01, Image_S, NULL);
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
