/*
** EPITECH PROJECT, 2022
**  myrpg
** File description:
** include
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct sf_name {
    int rectx_play;
    int recty_play;
    int rectx_quit;
    int recty_quit;
    int rectx_resume;
    int recty_resume;
    int rectx_bmenu;
    int recty_bmenu;
    int rectx_how;
    int recty_how;
    int instance;
    float y;
    float x;
    int speed_x;
    int speed_y;
    int pause;
    int step_r;
    int step_l;
    int step_d;
    int step_u;
    int enemies_max;
    int step_max;
    int verif_access;
    sfFont *font2;
    sfText *text;
    sfText *text2;
    sfText *text3;
    sfText *text4;
    float mov_y;
    float mov_x;
    sfVector2f movement;
    sfVector2i mousePosition;
    sfText *play;
    sfText *quit;
    sfText *how;
    sfFont *font;
    sfRenderWindow *window;
    sfEvent event;
    sfClock *clock;
    sfTime time;
    float seconds;
} background;

typedef struct sf_sprite {
    int detector;
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect *rect;
} t_sprite;

t_sprite **init_val(void);

typedef struct sf_music {
    sfMusic *music;
    sfSoundBuffer *buff;
    sfSound *sound;
} t_music;

t_music **init_val_music(void);

typedef struct sf_inventory {
    int detector;
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect *rect;
    t_music **music;
} t_inventory;

t_inventory **init_val_inv(void);

typedef struct sf_zone {
    sfTexture *texture;
    sfSprite *sprite;
    t_music **music;
} t_zone;

t_zone **init_val_zone(void);
t_zone **init_val_zone2(void);

typedef struct sf_collision {
    sfImage *image;
} t_collision;

t_collision **init_image(void);
t_collision **init_image2(void);

#endif
