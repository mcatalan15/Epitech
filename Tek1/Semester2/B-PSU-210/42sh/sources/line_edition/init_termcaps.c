/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <string.h>
#include <stdio.h>
#include <term.h>
#include <errno.h>
#include <string.h>
#include "edit.h"
#include "sh.h"

int get_term(t_line *line)
{
    char *term;

    if (!(term = get_env(line->sh->exe->env->envp, "TERM=")))
        term = "xterm";
    if (tgetent(NULL, term) < 0 ||
            tcgetattr(0, &(line->sh->save)) < 0 ||
            tcgetattr(0, &(line->sh->new)) < 0)
        return (ERRNO);
    return (SUCCESS);
}

int set_termcaps(t_line *line)
{
    static char	init = 0;

    if (++init == 1)
        {
            if (get_term(line) == FAILURE)
    return (FAILURE);
            line->sh->new.c_lflag &= ~(ICANON | ECHO);
        }
    if (tcsetattr(0, TCSANOW, &(line->sh->new)) == FAILURE)
        return (ERRNO);
    return (SUCCESS);
}
