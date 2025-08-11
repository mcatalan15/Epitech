/*
** EPITECH PROJECT, 2022
**  myrpg
** File description:
** rpg
*/

#ifndef DEFENDER_H_
    #define DEFENDER_H_

    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <SFML/Audio.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include "struct.h"

    int get_pixel(background *obj, t_sprite **sprite, t_collision **im, int
                    ins);
    void destroy(t_sprite **, t_inventory **, t_zone **, background *);
    void destroy_image(t_collision **);
    void destroy_music(t_music **);
    int init_button_play(background *, int, int, t_music *);
    int init_button_quit(background *, t_music *);
    int init_button_how_to(background *, int, int, t_music *);
    int check_button_play(background *back, t_music *music);
    int check_button_quit(background *back, t_music *music);
    int check_button_how_to(background *back, t_music *music);
    int check_in(t_sprite **, background *, t_zone **, t_inventory **);
    int game(void);
    void move_player(background *, t_sprite **);
    int init_back_menu(t_sprite **, background *, t_music *);
    int init_how_to(t_sprite **, background *, t_music *);
    int init_zone10(t_zone **, background *, t_sprite **, t_inventory **);
    int init_zone11(t_zone **, background *, t_sprite **, t_inventory **);
    int init_zone12(t_zone **, background *, t_sprite **, t_inventory **);
    int init_all_sprite(t_sprite **, background *, t_zone **, t_inventory **);
    void anim_sprite(t_sprite *sprite, int offset, int max_value, int reset);
    int get_pos(t_sprite *sprite, background *back);
    void animation_managing(background *back, t_sprite **sprite,
        t_inventory **);
    void is_key_pressed_clock(t_inventory **, t_sprite **, background *);
    void inventory_size(t_inventory **);
    void sprite_size(t_sprite **);
    void manage_event(background *);
    int window(t_sprite **, background *, t_zone **, t_inventory **);
    void init_window(background *);
    int init_button_resume(background *);
    int init_button_quit_game(background *);
    int init_button_menu_game(background *);
    void display_inventory(background *, t_inventory **);
    int get_pixel(background *, t_sprite **, t_collision **, int);
    int load_life(background *, t_sprite **);
    void display_enemy(background *, t_sprite *enemy, t_inventory *sword,
                        t_music *sound);
    void check_hit(t_sprite *enemy, t_sprite *player, t_sprite *life,
                    t_music *sound);
    int init_zone10(t_zone **, background *, t_sprite **, t_inventory **);
    int init_zone11(t_zone **, background *, t_sprite **, t_inventory **);
    int init_zone12(t_zone **, background *, t_sprite **, t_inventory **);
    int init_zone13(t_zone **, background *, t_sprite **, t_inventory **);
    void play_music(t_music *);
    void play_sound(t_music *);
    void my_put_nbr(int nb);
    void keys(background *, t_sprite **, t_inventory **, t_collision **);
    void sword(t_inventory *, t_sprite **, t_music *);

#endif
