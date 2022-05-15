/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

void superman_setting(t_r_struct *r_struct)
{
    if (r_struct->superman_pos.x <= 0
    || r_struct->hit == 1) {
        if (r_struct->superman_pos.x <= 0) {
            r_struct->score += 1;
        }
        if (r_struct->hit == 1)
            sfSound_play(r_struct->bruh_sound);
        r_struct->superman_pos = ini_pos();
        sfSprite_setPosition(r_struct -> character , r_struct->icon_pos);
        r_struct->velocity_superman.x = get_velocity(r_struct->level);
    }
    sfSprite_setPosition(r_struct->superman, r_struct->superman_pos);
    sfSprite_move(r_struct->superman, r_struct->velocity_superman);
    r_struct->superman_pos = sfSprite_getPosition(r_struct->superman);
    sfRenderWindow_drawSprite(r_struct->window, r_struct->superman, NULL);
    show_shots(r_struct->window, r_struct->shots, 
    r_struct->num_shots, r_struct->video_mode);
    sfRenderWindow_drawText(r_struct->window, r_struct->textmsg, NULL);
    sfRenderWindow_drawText(r_struct->window, r_struct->text, NULL);
    sfRenderWindow_display(r_struct -> window);
}

void my_runner_setting(t_r_struct *r_struct)
{
    if (r_struct->num_shots >= 1) {
        r_struct->hit = hit_charcter(r_struct);
        r_struct->num_shots -= hit_charcter(r_struct);
        print_bgrnd1(r_struct);
        print_bgrnd2(r_struct);
        if (r_struct->hit == 0)
            print_character(r_struct);
        superman_setting(r_struct);
    }
    else
        print_gover(&r_struct);
}

sfRenderWindow *my_window(t_r_struct *r_struct)
{
    srand(time(NULL));
    r_struct->score = 0;
    sfMusic_play(r_struct->mandanga_song);
    while (sfRenderWindow_isOpen(r_struct -> window))  {
        analayse_events(&r_struct, 0);
        if (r_struct->level == 0 && r_struct->num_shots >= 1) {
            print_menu(&r_struct);
        }
        else {
            sfText_setString(r_struct->text, my_return_time(r_struct->score));
            my_runner_setting(r_struct);
        }
    }
    sfMusic_destroy(r_struct->mandanga_song);
}

void my_runner (void)
{
    t_r_struct r_struct;

    r_struct.video_mode = (sfVideoMode){1280, 769, 64};
    r_struct.window = sfRenderWindow_create(r_struct.video_mode,
    "My-Hunter", sfDefaultStyle, NULL);
    create_snd(&r_struct);
    create_clks(&r_struct);
    create_pos(&r_struct);
    ini_r_struct_struct(&r_struct);
    create_txt(&r_struct);
    sfSprite_setPosition(r_struct.textlevels, r_struct.pbuttons);
    sfSprite_scale(r_struct.shots, (sfVector2f){0.1, 0.1});
    my_window(&r_struct);
    sfRenderWindow_destroy(r_struct.window);
}

int main (int argc, char **argv)
{
    char *buffer = malloc(sizeof(char) * 250);
    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h') {
        read(open("how_to_play.txt", O_RDONLY), buffer, 250);
        my_putchar(buffer);
    }
    else if (argc == 1 )
        my_runner();
    else
        exit (84);
    free(buffer);
    return 0;
}
