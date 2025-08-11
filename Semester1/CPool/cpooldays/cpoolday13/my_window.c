/*
** EPITECH PROJECT, 2021
** my_window
** File description:
** Displays a window via CSFML
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>

//#include "framebuffer.h"
int main()
{
    sfRenderWindow *window;
    sfVideoMode video_mode;
    sfEvent event;
    
    video_mode.width = 800;
    video_mode.height = 600;
    video_mode.bitsPerPixel = 32;
    
    window = sfRenderWindow_create(video_mode, "MyWindow", sfDefaultStyle, NULL);

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
        }
    }
    sfRenderWindow_destroy(window);
    return (0);
}
