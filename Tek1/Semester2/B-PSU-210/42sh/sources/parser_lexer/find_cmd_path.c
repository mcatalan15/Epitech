/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include "parser.h"
#include "tokenizer.h"
#include "sh.h"

int is_dir(const char *target)
{
    struct stat	statbuf;

    stat(target, &statbuf);
    return (S_ISDIR(statbuf.st_mode));
}

static char *is_absolut_path(char *cmd)
{
    if (cmd && ((cmd[0] == '.' && cmd[1] == '/') || cmd[0] == '/')
            &&    IS_EXEC(cmd))
        return (my_strdup(cmd));
    return (NULL);
}

static int is_builtin(t_cmd *cmd)
{
    static char *b_tab[6] = {"exit", "setenv", "unsetenv", "cd", "env",
                            "echo"};
    int i = -1;

    while (++i < 6)
        if (!my_strcmp(b_tab[i], cmd->stock[0]))
            return (i);
    return (-1);
}

static char *is_in_paths(char *cmd, t_execution *exe)
{
    int i = 0;
    char *str;

    while (cmd && exe->env->paths && exe->env->paths[i]) {
        if (!(str = my_strjoint(exe->env->paths[i], cmd)))
            return (NULL);
        if (IS_EXEC(str))
            return (str);
        i++;
        XFREE(str);
    }
    return (NULL);
}

int find_path(t_cmd *cmd, t_execution *exe)
{
    if ((cmd->builtin = is_builtin(cmd)) > 0)
        return (SUCCESS);
    if ((cmd->path = is_absolut_path(cmd->stock[0])))
        return (SUCCESS);
    if ((cmd->path = is_in_paths(cmd->stock[0], exe)))
        return (SUCCESS);
    return (FAILURE);
}
