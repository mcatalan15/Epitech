#include "./../includes/library.h"
#include "./../includes/structs.h"

sfSprite *create_bgrnd(void)
{
    sfTexture *textureBack = sfTexture_createFromFile
    ("./img/sky_my_runner.png", NULL);
    sfSprite *SpriteBack = sfSprite_create();
    sfSprite_setTexture (SpriteBack, textureBack, 0);
    return (SpriteBack);
}

sfSprite *create_bgrnd2(void)
{
    sfTexture *texture_background2 = sfTexture_createFromFile
    ("./img/barcelona_background.png", NULL);
    sfSprite *sprite_background2 = sfSprite_create();
    sfSprite_setTexture (sprite_background2, texture_background2, 0);
    return (sprite_background2);
}

