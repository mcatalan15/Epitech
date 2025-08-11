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

int exec_command(t_cmd *tmp, t_execution *exe)
{
    if (tmp->builtin == -1 &&
        execve(tmp->path, tmp->stock, exe->env->envp) == FAILURE) {
            exe->exit = FAILURE;
            return (ERRNO);
        }
    else
        exec_builtins(tmp, exe);
    return (SUCCESS);
}
