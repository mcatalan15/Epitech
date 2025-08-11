/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <string.h>
#include "sh.h"

static int find_flags(char **stock, char *flagstatus)
{
    int i;

    i = -1;
    while (stock[++i] != NULL)
        {
            if ((my_strcmp(stock[i], "-n")) == 0)
    flagstatus[0] = 1;
            if ((my_strcmp(stock[i], "-e")) == 0)
    flagstatus[1] = 1;
            if ((my_strcmp(stock[i], "-E")) == 0)
    flagstatus[1] = 0;
        }
    return (0);
}

int my_echo(t_execution *exe, t_cmd *cmd)
{
    char flagstatus[2];

    (void)exe;
    flagstatus[0] = 0;
    flagstatus[1] = 0;
    find_flags(cmd->stock, flagstatus);
    find_strings(cmd->stock, flagstatus);
    return (B_SUCCESS);
}
