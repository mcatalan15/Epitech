/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

void ini_r_struct_struct(t_r_struct *r_struct)
{
    r_struct -> background = create_bgrnd();
    r_struct -> background2 = create_bgrnd2();
    r_struct -> textlevels = create_txtlevel();
    r_struct -> easy_button = create_btnlvl1();
    r_struct -> medium_button = create_btnlvl2();
    r_struct -> hard_button = create_btnlvl3();
    r_struct -> character =  create_charcter();
    r_struct -> gover = create_gover();
    r_struct -> shots = create_shots();
    r_struct -> superman = create_superman();
    r_struct -> char_jump = create_jump();
    r_struct -> char_bend = create_bend();
    ini_r_struct_struct2(r_struct);
}

void ini_r_struct_struct2(t_r_struct *r_struct)
{
    r_struct -> counter = 1;
    r_struct -> hit = 0;
    r_struct -> level = 0;
    r_struct -> pbuttons.x += 40;
    r_struct -> num_shots = 5;
    r_struct -> score = 0;
    r_struct -> dead = 0;
    r_struct -> jump = 0;
}

int analayse_events(t_r_struct **r_struct, int page)
{
    int hit = 0;
    while (sfRenderWindow_pollEvent((*r_struct) ->
    window, &(*r_struct) -> event))
    {
        if ((*r_struct) -> event.type == sfEvtClosed)
            sfRenderWindow_close((*r_struct) -> window);
        else if ((*r_struct) -> event.type == sfEvtMouseButtonPressed) {
            if (page == 1)
                hit = levels((*r_struct) -> window);
        }
    }
    return (hit);
}

void jump_sound (t_r_struct *r_struct)
{
    if (!r_struct->jump) {
        sfSound_play(r_struct->shees_sound);
        r_struct->jump = 1;
    }

}
