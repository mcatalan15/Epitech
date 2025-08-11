/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** path
*/

#ifndef PATH_H_
#define PATH_H_

typedef struct img_data_s {
    const char *filepath;
    const int w;
    const int h;
    const int img_w;
    const int img_h;
} img_data_t;

static const char *IMG_BUTTON_TOWER = "img2/menu/btns_towers.png";
static const int BUTTON_TOWER_W = 114;
static const int BUTTON_TOWER_H = 133;
static const img_data_t POISON_IDLE = {"img2/towers/del_oro.png",
80, 144, 3440, 144};
static const img_data_t STORM_IDLE = {"img2/towers/veneciana.png",
80, 144, 1200, 144};
static const img_data_t ICE_IDLE = {"img2/towers/mudejeres.png",
80, 144, 2800, 144};
static const img_data_t FIRE_IDLE = {"img2/towers/giralda.png",
80, 144, 2160, 144};
static const img_data_t BUTTON_IMG = {"img2/menu/btns.png",
300, 109, 250, 328};
static const img_data_t IMG_THUMBNAIL = {"img2/menu/tittle.png",
543, 238, 543, 238};

static const img_data_t BG_HEATLH_BAR = {"img2/bar/Healthbar.png",
70, 10, 70, 10};
static const img_data_t FR_HEATLH_BAR = {"img2/bar/HealthbarFront.png",
70, 10, 70, 10};

static const img_data_t DANTE_U = {"img2/character/dante/dante_up.png",
60, 79, 840, 79};
static const img_data_t DANTE_D = {"img2/character/dante/dante_down.png",
60, 79, 837, 79};
static const img_data_t DANTE_L = {"img2/character/dante/dante_left.png",
60, 79, 837, 79};
static const img_data_t DANTE_R = {"img2/character/dante/dante_right.png",
60, 79, 837, 79};
static const img_data_t DANTE_DEATH =
{"img2/character/dante/dante_death.png", 60, 29, 2040, 29};
static const img_data_t ADA_U = {"img2/character/ada/ada_up.png",
78, 80, 1092, 80};
static const img_data_t ADA_D = {"img2/character/ada/ada_down.png",
78, 80, 1092, 79};
static const img_data_t ADA_L = {"img2/character/ada/ada_left.png",
35, 80, 490, 80};
static const img_data_t ADA_R = {"img2/character/ada/ada_right.png",
35, 80, 490, 80};
static const img_data_t ADA_DEATH =
{"img2/character/ada/ada_death.png", 60, 29, 2040, 29};
static const img_data_t ALBERTO_U = {"img2/character/alberto/alberto_up.png",
70, 70, 980, 70};
static const img_data_t ALBERTO_D = {"img2/character/alberto/alberto_down.png",
70, 70, 980, 70};
static const img_data_t ALBERTO_L = {"img2/character/alberto/alberto_left.png",
70, 70, 980, 70};
static const img_data_t ALBERTO_R =
{"img2/character/alberto/alberto_right.png", 70, 70, 980, 70};
static const img_data_t ALBERTO_DEATH =
{"img2/character/alberto/alberto_death.png", 58, 28, 2040, 28};
static const img_data_t GEORGE_U = {"img2/character/george/george_up.png",
70, 70, 980, 70};
static const img_data_t GEORGE_D = {"img2/character/george/george_down.png",
70, 70, 980, 70};
static const img_data_t GEORGE_L = {"img2/character/george/george_left.png",
70, 70, 980, 70};
static const img_data_t GEORGE_R = {"img2/character/george/george_right.png",
70, 70, 980, 70};
static const img_data_t GEORGE_DEATH =
{"img2/character/george/george_death.png",
58, 28, 2040, 28};


#endif /* !PATH_H_ */
