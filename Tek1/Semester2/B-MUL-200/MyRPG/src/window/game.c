/*
** EPITECH PROJECT, 2022
**  myrpg
** File description:
** window
*/

#include "rpg.h"

void is_key_pressed_clock(t_inventory **inv, t_sprite **sprite, background *ba)
{
    if (sfKeyboard_isKeyPressed(sfKeyI) == sfTrue) {
        if (inv[2]->detector == 0)
            inv[2]->detector = 1;
        else
            inv[2]->detector = 0;
    }
    if (ba->instance == 5 && get_pos(sprite[4], ba) == 0)
            inv[5]->detector = 1;
    else
        inv[5]->detector = 0;
}

void event(background *ba)
{
    while (sfRenderWindow_pollEvent(ba->window, &ba->event)) {
        manage_event(ba);
    }
}

int loop2(background *ba, t_sprite **sprite, t_inventory **inv,
            t_collision **image)
{
    event(ba);
    if (ba->pause == 0) {
        if (ba->instance != 0) {
            keys(ba, sprite, inv, image);
            animation_managing(ba, sprite, inv);
        }
    }
    return (0);
}

int loop(t_zone **zone, t_sprite **sprite, t_inventory **inv,
            background *ba)
{
    t_collision **image = init_image();
    zone[0]->music = init_val_music();
    inv[0]->music = init_val_music();

    while (sfRenderWindow_isOpen(ba->window)) {
        if (ba->verif_access == 1) {
            destroy_image(image);
            free(image);
            return (0);
        }
        loop2(ba, sprite, inv, image);
        if (window(sprite, ba, zone, inv) == 1)
            return (0);
    }
    destroy_image(image);
    free(image);
    return (0);
}

int game(void)
{
    t_zone **zone = init_val_zone();
    t_sprite **sprite = init_val();
    t_inventory **inv = init_val_inv();
    background *back = malloc(sizeof(background));

    if (back == NULL)
        return (84);
    init_window(back);
    sfRenderWindow_setFramerateLimit(back->window, 60);
    loop(zone, sprite, inv, back);
    destroy_music(zone[0]->music);
    destroy_music(inv[0]->music);
    destroy(sprite, inv, zone, back);
    free(zone);
    free(sprite);
    free(inv);
    free(back);
    return (0);
}