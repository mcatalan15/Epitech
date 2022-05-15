/*
** EPITECH PROJECT, 2021
** test.c
** File description:
** Trying things
*/


#include "GraphicalLIB.h"
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>

sfMusic *set_music(sfMusic *music)
{
    music = sfMusic_createFromFile("song.wav");
    sfMusic_setLoop(music, sfTrue);
    sfMusic_setVolume(music, 25);
    sfMusic_play(music);
    return (music);
}

sfSprite *add_duck()
{
    sfTexture *Duck_T = sfTexture_createFromFile("duck_frame.png", NULL);
    sfSprite *Duck_S = sfSprite_create();
    sfSprite_setTexture(Duck_S, Duck_T, 0);
    return Duck_S;
}

sfSprite *add_background()
{
    sfTexture *Image_T = sfTexture_createFromFile("duckhunter_rbgd.png", NULL);
    sfSprite *Image_S = sfSprite_create();
    sfSprite_setTexture(Image_S, Image_T, 0);
    return Image_S;
}

void duck_frame_change(sfIntRect *duck_frame)
{
    duck_frame -> left += 110;
    if (duck_frame -> left >= 330)
        duck_frame -> left = 0;
}

sfRenderWindow *my_window()
{
    sfRenderWindow *my_hunter;
    sfVideoMode video;
    sfEvent evnt;
    sfSprite *background = add_background();

    sfIntRect duck_frame = {0, 0, 110, 110};
    sfClock *clock = sfClock_create();
    sfTime time;
    sfSprite *duck = add_duck();
    sfVector2f pos = {-110, 50};
    sfVector2f mov = {7.5, 0};
    sfVector2f duck_pos = {0, 0};

    video.width = 900;
    video.height = 700;
    video.bitsPerPixel = 64;

    my_hunter = sfRenderWindow_create(video, "My Hunter", sfDefaultStyle, NULL);

    while (sfRenderWindow_isOpen(my_hunter)){
        sfMusic *set_music(sfMusic *music);
        time = sfClock_getElapsedTime(clock);
        sfSprite_setTextureRect(duck, duck_frame);
        sfSprite_move(duck, mov);
        duck_pos = sfSprite_getPosition(duck);
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(my_hunter);
            if ((mouse_pos.x < (duck_pos.x + 110) &&
            mouse_pos.x > (duck_pos.x - 110)) &&
            (mouse_pos.y < (duck_pos.y + 110) &&
            mouse_pos.y > (duck_pos.y - 110))) {
                pos.x = -110;
                sfSprite_setPosition(duck, pos);
            }
        }
        if (duck_pos.x >= video.width) {
            sfSprite_setPosition(duck, pos);
        }
        if (sfTime_asSeconds(time) > 0.1) {
            duck_frame_change(&duck_frame);
            sfClock_restart(clock);
        }
        sfRenderWindow_drawSprite(my_hunter, background, NULL);
        sfRenderWindow_drawSprite(my_hunter, duck, NULL);
        sfRenderWindow_display(my_hunter);
        while (sfRenderWindow_pollEvent(my_hunter, &evnt)) {
            if (evnt.type == sfEvtClosed) {
                sfRenderWindow_close(my_hunter);
            }
        }
    }
    sfRenderWindow_destroy(my_hunter);
    return (0);
}

