/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

void create_snd(t_r_struct *r_struct)
{
    r_struct -> buffer = sfSoundBuffer_createFromFile("./sounds/shees.wav");
    r_struct -> shees_sound = sfSound_create();
    sfSound_setBuffer(r_struct -> shees_sound, r_struct -> buffer);
    r_struct -> buffer = sfSoundBuffer_createFromFile("./carabirubi.wav");
    r_struct -> carabirubi_song = sfSound_create();
    sfSound_setBuffer(r_struct -> carabirubi_song, r_struct -> buffer);
    r_struct -> buffer = sfSoundBuffer_createFromFile("./sounds/bruh.wav");
    r_struct -> bruh_sound = sfSound_create();
    sfSound_setBuffer(r_struct -> bruh_sound, r_struct -> buffer);
    r_struct -> buffer = sfSoundBuffer_createFromFile("./sounds/yeah_boy.wav");
    r_struct -> sound_select = sfSound_create();
    sfSound_setBuffer(r_struct -> sound_select, r_struct -> buffer);
    r_struct->mandanga_song = sfMusic_createFromFile("sounds/mandanga.wav");
}

void create_clks(t_r_struct *r_struct)
{
    r_struct -> clock = sfClock_create();
}

void create_txt (t_r_struct *r_struct)
{
    r_struct->font = sfFont_createFromFile("./font/manaspc.ttf");
    r_struct->text = sfText_create();
    r_struct->textmsg = sfText_create();
    sfText_setFont(r_struct->text, r_struct->font);
    sfText_setCharacterSize(r_struct->text, 50);
    sfText_setColor(r_struct->text, sfColor_fromRGB(255, 255, 255));
    sfText_setPosition(r_struct->text, r_struct->pos_s_num_num);
    sfText_setString(r_struct->textmsg, "Score:");
    sfText_setFont(r_struct->textmsg, r_struct->font);
    sfText_setCharacterSize(r_struct->textmsg, 50);
    sfText_setColor(r_struct->textmsg, sfColor_fromRGB(255, 255, 255));
    sfText_setPosition(r_struct->textmsg, r_struct->pos_s_label);
}

void create_pos(t_r_struct *r_struct)
{
    r_struct -> pos_errase = (sfVector2f) {0, 0};
    r_struct -> icon_selection = (sfIntRect) {0, 0, 70, 115};
    r_struct -> icon_pos = (sfVector2f) {300, 600};
    r_struct -> pos_s_label = (sfVector2f) {900, 20};
    r_struct -> pos_s_num_num = (sfVector2f) {1100, 20};
    r_struct -> icon_up = (sfVector2f) {0, -8};
    r_struct -> icon_down = (sfVector2f) {0, 8};
    r_struct -> pos_background = (sfVector2f) {0, 0};
    r_struct -> pos_background_2 = (sfVector2f) {1280, 0};
    r_struct -> velocity_background = (sfVector2f) {-0.5, 0};
    r_struct -> pos_background2 = (sfVector2f) {0, 190};
    r_struct -> pos_background2_2 = (sfVector2f) {1280, 190};
    r_struct -> velocity_background2 = (sfVector2f) {-1, 0};
    r_struct -> pos_background3 = (sfVector2f) {0, 450};
    r_struct -> pos_background3_2 = (sfVector2f) {1290, 450};
    r_struct -> velocity_background3 = (sfVector2f) {-2, 0};
    r_struct -> superman_pos = (sfVector2f) {1300, 500};
    r_struct -> velocity_superman = (sfVector2f) {-6, 0};
    r_struct -> velocity = (sfVector2f) {5, 0};
    r_struct -> pbuttons = (sfVector2f) {(r_struct ->
    video_mode.width / 2) - 190, 50};
}
