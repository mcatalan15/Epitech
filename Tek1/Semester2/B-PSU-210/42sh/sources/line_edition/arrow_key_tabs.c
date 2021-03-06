/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include "sh.h"
#include "edit.h"

const int key_tab[AK_NB] = {K_LEFT, K_RIGHT, K_DEL, K_UP, K_DOWN, K_TAB,
                            CTRL_A, CTRL_E, CTRL_B, ALT_B, CTRL_F, ALT_F,
                            CTRL_E, CTRL_U, CTRL_K, CTRL_W, CTRL_L, ALT_I};

const t_ak act_tab[AK_NB] = {move_left, move_right, delete_char,
                    go_prev, go_next, tab_glob, move_to_start,
                    move_to_end, move_left, move_back_word,
                    move_right, move_fwd_word, delete_word,
                    delete_until_start, delete_until_end,
                    delete_word, clear_scr, real_tab};
