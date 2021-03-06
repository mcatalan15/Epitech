/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include "sh.h"
#include "parser.h"
#include "tokenizer.h"

static int cmd_not_in_paths(const t_cmd *tmp, t_execution *exe)
{
    X_ERROR("Error : `%s' command not found\n", tmp->stock[0]);
    exe->return_value = 514;
    if (exe->prev_pipe != -1)
        close(exe->prev_pipe);
    if (exe->nb_pipes != exe->pos + 2)
        --(exe->exit);
    --(exe->nb_pipes);
    return (SUCCESS);
}

static int exec_in_father(t_cmd *root, t_cmd *tmp, t_execution *exe)
{
    if (!tmp->path && tmp->builtin == -1)
        return (cmd_not_in_paths(tmp, exe));
    if (tmp->next != root && dup2(exe->fdp[1], STDOUT_FILENO) < 0)
        return (ERRNO);
    if (exe->prev_pipe != -1 && dup2(exe->prev_pipe, STDIN_FILENO) < 0)
        return (ERRNO);
    if (tmp->next != root)
        close(exe->fdp[0]);
    if (NW(tmp->stock[1]))
        setsid();
    exec_command(tmp, exe);
    close(exe->fdp[1]);
    return (SUCCESS);
}

int exec_in_son(const t_cmd *root, const t_cmd *tmp, t_execution *exe)
{
    if (exe->prev_pipe != -1)
        close(exe->prev_pipe);
    if (tmp->next != root) {
        close(exe->fdp[1]);
        exe->prev_pipe = exe->fdp[0];
    }
    return (SUCCESS);
}

int exec_builtins(t_cmd *cmd, t_execution *exe)
{
    static const t_build b_tab[6] = {my_exit, my_setenv, my_unsetenv, my_cd,
    my_env, my_echo};

    --(exe->nb_pipes);
    exe->return_value = b_tab[cmd->builtin](exe, cmd);
    if (cmd->builtin > 3 || LASTPIPE)
        exe->exit = (exe->return_value == -1 ? 514 : 512);
    return (exe->return_value);
}

int execution_loop(t_cmd *cmd, t_execution *exe)
{
    t_cmd *tmp = cmd;

    if (handle_redirections(cmd, exe) == FAILURE)
        return (FAILURE);
    while ((tmp = tmp->next) != cmd && exe->exit == 0) {
        find_path(tmp, exe);
        exe->return_value = 0;
        if (!tmp->path && tmp->builtin == -1 && LASTPIPE)
            cmd_not_in_paths(tmp, exe);
        else if (tmp->builtin >= 0 && tmp->builtin < 4 && LASTPIPE)
            exec_builtins(tmp, exe);
        else if (pipe(exe->fdp) >= 0 && (exe->curr_pid = fork()) == 0)
            exec_in_father(cmd, tmp, exe);
        else if (exe->curr_pid > 0)
            exec_in_son(cmd, tmp, exe);
        else
            return (FAILURE);
        exe->pid[++exe->pos] = exe->curr_pid;
    }
    return (exe->exit == 512 ? SUCCESS :    close_redirections(cmd, exe));
}
