/*
** EPITECH PROJECT, 2022
** myrpg
** File description:
** music
*/

#include "rpg.h"

static t_music *init_music(char *str)
{
    t_music *music = malloc(sizeof(t_music));

    if (music == NULL)
        return (NULL);
    music->music = sfMusic_createFromFile(str);
    if (!music->music)
        return (NULL);
    return (music);
}

static t_music *init_sound(char *str)
{
    t_music *sound = malloc(sizeof(t_music));

    sound->music = NULL;
    if (sound == NULL)
        return (NULL);
    sound->buff = sfSoundBuffer_createFromFile(str);
    sound->sound = sfSound_create();
    sfSound_setBuffer(sound->sound, sound->buff);
    if (!sound->buff)
        return (NULL);
    return (sound);
}

t_music **init_val_music(void)
{
    t_music **music = malloc(sizeof(t_music *) * 6);

    if (!music)
        return (NULL);
    music[0] = init_music("img/snd/peace.ogg");
    music[1] = init_sound("img/snd/click.ogg");
    music[2] = init_sound("img/snd/death.ogg");
    music[3] = init_sound("img/snd/sword.ogg");
    music[4] = init_sound("img/snd/hurt.ogg");
    music[5] = NULL;
    return (music);
}

void play_music(t_music *music)
{
    if (sfMusic_getStatus(music->music) != sfPlaying)
        sfMusic_play(music->music);
}

void play_sound(t_music *sound)
{
    if (sfSound_getStatus(sound->sound) != sfPlaying)
        sfSound_play(sound->sound);
}