/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <string.h>
#include <stdlib.h>
#include "sh.h"

void fill_env_struct(t_env_dll *elem, char *env_line)
{
    int i;

    i = -1;
    while (env_line[++i])
        if (env_line[i] == '=')
            break ;
    elem->name = env_line;
    elem->value = &env_line[i + 1];
    elem->size = i;
}

int add_env_variable(t_env_dll *elem, char *env_line)
{
    t_env_dll *newelem;

    if (!env_line)
        return (FAILURE);
    if (!(newelem = calloc(1, sizeof(t_env_dll))))
        return (FAILURE);
    newelem->prev = elem->prev;
    newelem->next = elem;
    elem->prev->next = newelem;
    elem->prev = newelem;
    fill_env_struct(newelem, env_line);
    return (SUCCESS);
}

static t_env_dll *init_dll(void)
{
    t_env_dll *root;

    if (!(root = calloc(1, sizeof(t_env_dll))))
        return (NULL);
    root->prev = root;
    root->next = root;
    return (root);
}

int put_env_in_tab(t_env *env)
{
    t_env_dll *tmp;
    int i;

    i = -1;
    tmp = env->env_dll;
    if (!(env->envp = calloc(ENV_BUFF, sizeof(char *))))
        return (FAILURE);
    while ((tmp = tmp->next) != env->env_dll && ++i < ENV_BUFF)
        env->envp[i] = tmp->name;
    env->envp[++i] = NULL;
    return (SUCCESS);
}

int put_env_in_dll(char **envp, t_execution *exe)
{
    int i;

    i = -1;
    if (!(exe->env->env_dll = init_dll()))
        return (FAILURE);
    while (envp[++i])
        if (add_env_variable(exe->env->env_dll, my_strdup(envp[i])) == FAILURE)
            return (FAILURE);
    if (put_env_in_tab(exe->env) == FAILURE)
        return (FAILURE);
    return (SUCCESS);
}
