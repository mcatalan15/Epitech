/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** Set all the music
*/

#include "defender.h"

static const char *BUY = "img2/sng/buy.ogg";
static const char *CLICK = "img2/sng/click.ogg";
static const char *DIE = "img2/sng/die.ogg";
static const char *TOOL = "img2/sng/tool.ogg";
static const char *TOWER = "img2/sng/tower.ogg";
static const char *TP = "img2/sng/tp.ogg";
static const char *GAME_OVER = "img2/sng/over.ogg";

void set_music(music_t *music)
{
    music->buy = sfMusic_createFromFile(BUY);
    music->click = sfMusic_createFromFile(CLICK);
    music->die = sfMusic_createFromFile(DIE);
    music->tool = sfMusic_createFromFile(TOOL);
    music->tower = sfMusic_createFromFile(TOWER);
    music->tp = sfMusic_createFromFile(TP);
    music->game_over = sfMusic_createFromFile(GAME_OVER);
}

void free_music(music_t music)
{
    sfMusic_destroy(music.buy);
    sfMusic_destroy(music.click);
    sfMusic_destroy(music.die);
    sfMusic_destroy(music.tool);
    sfMusic_destroy(music.tower);
    sfMusic_destroy(music.tp);
    sfMusic_destroy(music.game_over);
}
