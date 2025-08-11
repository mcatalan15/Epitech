/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include "edit.h"
#include "sh.h"

int kill_sons(int *pid)
{
    int x;

    x = -1;
    while (pid[++x])
        kill(pid[x], SIGINT);
    return (SUCCESS);
}

int signal_ctz(int sig)
{
    int i;

    if (!isatty(0))
        return (0);
    if (lx->sh->exe->pid)
        return (kill_sons(lx->sh->exe->pid));
    i = -2;
    lx->line_len = 0;
    lx->key = 0;
    lx->pos = 0;
    lx->line[0] = 0;
    write(1, "^C", 2);
    while (++i < (lx->sh->p_size))
        CAP("le");
    printf("\n");
    write(1, lx->sh->prompt, lx->sh->p_size);
    clear_and_display(lx);
    return (sig);
}
