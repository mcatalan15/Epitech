/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** load_enemy_texutre
*/

#include <stdlib.h>
#include "defender.h"

static anim_texture_t load_texture(img_data_t img)
{
    anim_texture_t temp;

    temp.texture = sfTexture_createFromFile(img.filepath, NULL);
    temp.max_w = img.img_w;
    temp.w = img.w;
    temp.h = img.h;
    return (temp);
}

static void load_all_enemy(anim_texture_t *texture)
{
    texture[0] = load_texture(DANTE_D);
    texture[1] = load_texture(DANTE_U);
    texture[2] = load_texture(DANTE_L);
    texture[3] = load_texture(DANTE_R);
    texture[4] = load_texture(DANTE_DEATH);
    texture[5] = load_texture(ADA_D);
    texture[6] = load_texture(ADA_U);
    texture[7] = load_texture(ADA_L);
    texture[8] = load_texture(ADA_R);
    texture[9] = load_texture(ADA_DEATH);
    texture[10] = load_texture(ALBERTO_D);
    texture[11] = load_texture(ALBERTO_U);
    texture[12] = load_texture(ALBERTO_L);
    texture[13] = load_texture(ALBERTO_R);
    texture[14] = load_texture(ALBERTO_DEATH);
    texture[15] = load_texture(GEORGE_D);
    texture[16] = load_texture(GEORGE_U);
    texture[17] = load_texture(GEORGE_L);
    texture[18] = load_texture(GEORGE_R);
    texture[19] = load_texture(GEORGE_DEATH);
}

anim_texture_t *load_enemy_texture(void)
{
    anim_texture_t *temp = NULL;

    if ((temp = malloc(sizeof(anim_texture_t) * 21)) == NULL)
        return (NULL);
    temp[20].texture = NULL;
    load_all_enemy(temp);
    return (temp);
}
