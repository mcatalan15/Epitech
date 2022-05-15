/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** fgfghgf
*/

#ifndef STRUCTS_H_
#define STRUCTS_H_

    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>
    #include <time.h>
    #include <stdlib.h>
    #include <stdio.h>

    typedef struct s_r_struct {
    sfVideoMode video_mode;
    sfRenderWindow *window;
    sfSoundBuffer *buffer;
    sfSoundBuffer *buffer2;
    sfSound *carabirubi_song;
    sfSound *shees_sound;
    sfSound *bruh_sound;
    sfSound *sound_select;
    sfMusic *mandanga_song;
    sfIntRect icon_selection;
    sfClock *clock;
    sfClock *clock2;
    sfEvent event;
    sfTime time;
    sfSprite *background;
    sfSprite *background2;
    sfSprite *background3;
    sfSprite *textlevels;
    sfSprite *easy_button;
    sfSprite *medium_button;
    sfSprite *hard_button;
    sfSprite *character;
    sfSprite *gover;
    sfSprite *shots;
    sfSprite *superman;
    sfSprite *char_jump;
    sfSprite *char_bend;
    sfVector2f pos_errase;
    sfVector2f pbuttons;
    sfVector2f icon_pos;
    sfVector2f superman_pos;
    sfVector2f pos_background;
    sfVector2f pos_background_2;
    sfVector2f pos_background2;
    sfVector2f pos_background2_2;
    sfVector2f pos_background3;
    sfVector2f pos_background3_2;
    sfVector2f icon_down;
    sfVector2f icon_up;
    sfVector2f velocity_background;
    sfVector2f velocity_background2;
    sfVector2f velocity_background3;
    sfVector2f velocity_superman;
    sfVector2f velocity;
    sfFont *font;
    sfText *text;
    sfText *textmsg;
    sfVector2f pos_s_label;
    sfVector2f pos_s_num_num;
    int counter;
    int hit;
    int level;
    int num_shots;
    int score;
    int dead;
    int jump;
    } t_r_struct;

#endif
