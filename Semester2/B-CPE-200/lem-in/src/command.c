/*
** EPITECH PROJECT, 2022
** command.c
** File description:
** tells if it's a start or an end
*/

#include "lemin.h"
#include "structs.h"

int get_command(char *cmd, int actual_type)
{
    static int has_end = 0;
    static int has_start = 0;

    if (actual_type == CHECK)
        return (has_end == 1 && has_start == 1);
    if (my_strcmp(cmd, "start") == 0) {
        has_start++;
        return (START);
    }
    if (my_strcmp(cmd, "end") == 0) {
        has_end++;
        return (END);
    }
    return (actual_type);
}