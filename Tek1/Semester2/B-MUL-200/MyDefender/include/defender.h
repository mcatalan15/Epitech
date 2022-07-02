/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** defender
*/

#ifndef DEFENDER_H_
#define DEFENDER_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

typedef enum Bool_e{
    true = 1,
    false = 0
} bool;

#include "img_data.h"
#include "base.h"
#include "gameloop.h"
#include "tool.h"

static const int SUCCESS = 0;
static const int ERROR = 84;
static const int TRUE = 1;
static const int FALSE = 0;

static const float SCALE = 1;
static const int TILE_SIZE = 83;
static const int MAP_W = 24;
static const int MAP_H = 13;

static const char *FONT = "img2/GillSansUltraBold.ttf";
static const char *FONT2 = "img2/GillSansUltraBold.ttf";

int defender(int argc, char **argv);
int start_menu(sfRenderWindow *win);
int end_menu(sfRenderWindow *win, gameloop_t *gameloop);

#endif /* !DEFENDER_H_ */
