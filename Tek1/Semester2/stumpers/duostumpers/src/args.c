/*
** EPITECH PROJECT, 2022
** No filename
** File description:
** No description
*/

#include "my.h"

int get_size(char **argv, char *arg_flag, int default_size)
{
    int i = 0;
    while (argv[i] != NULL) {
        if (my_strcmp(argv[i], arg_flag) == 0) {
            return my_getnbr(argv[i + 1]);
        }
        i++;
    }
    return (default_size);
}

char get_player_char(char **argv, char *arg_flag, char default_char)
{
    int i = 0;
    while (argv[i] != NULL) {
        if (my_strcmp(argv[i], arg_flag) == 0) {
            return (argv[i + 1][0]);
        }
        i++;
    }
    return (default_char);
}
