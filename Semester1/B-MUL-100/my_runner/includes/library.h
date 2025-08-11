/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** lib my_hunterexercise
*/

#ifndef LIBRAY_H_
    #define LIBRAY_H_
    #include <string.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <stddef.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <ctype.h>
    #include "./structs.h"

sfSprite *create_txtlevel(void);
sfSprite *create_btnlvl1(void);
sfSprite *create_btnlvl2(void);
sfSprite *create_btnlvl3(void);
sfSprite *create_bend(void);

sfSprite *create_bgrnd(void);
sfSprite *create_bgrnd2(void);
sfSprite *create_gover(void);
sfSprite *create_charcter(void);

sfSprite *create_shots(void);
sfSprite *create_explosion(void);
sfSprite *create_superman(void);
sfSprite *create_errase(void);
sfSprite *create_jump(void);

void print_bgrnd1(t_r_struct *r_struct);
void print_bgrnd2(t_r_struct *r_struct);
void print_character2(t_r_struct *r_struct);
void print_character(t_r_struct *r_struct);

void print_gover(t_r_struct **r_struct);
void show_shots(sfRenderWindow *window, sfSprite *heart,
int counter, sfVideoMode video_mode);
void print_menu(t_r_struct **r_struct);
void print_charcter3(t_r_struct *r_struct);

sfVector2f ini_pos(void);
int get_velocity(int level);
int hit_charcter (t_r_struct *r_struct);
int levels (sfRenderWindow * window);
void change_charcter (sfIntRect *select_duck);

void create_snd(t_r_struct *r_struct);
void create_clks(t_r_struct *r_struct);
void create_txt(t_r_struct *r_struct);
void create_pos(t_r_struct *r_struct);

void my_putchar(char *str);
int fs_open_file(char const *filepath);
char *my_revstr(char *str);
char *my_return_time(int nb);
int nb_len(int nb);

void ini_r_struct_struct(t_r_struct *r_struct);
void ini_r_struct_struct2(t_r_struct *r_struct);
int analayse_events(t_r_struct **r_struct, int page);
void jump_sound (t_r_struct *r_struct);

void superman_setting(t_r_struct *r_struct);
void my_runner_setting(t_r_struct *r_struct);
sfRenderWindow *my_window(t_r_struct *r_struct);
void my_runner (void);

#endif
