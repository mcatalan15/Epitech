/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "sh.h"

int my_env(t_execution *exe, t_cmd *cmd)
{
    int i = -1;

    (void)cmd;
    while (exe->env->envp[++i])
        printf("%s\n", exe->env->envp[i]);
    return (B_SUCCESS);
}

char *get_env_line(char *s1, char *s2)
{
    int i;
    int j;
    char *str;

    j = -1;
    i = -1;
    if (!(str = calloc(my_strlen(s1) + my_strlen(s2) + 2, sizeof(char))))
        return (NULL);
    while (s1[++i])
        str[i] = s1[i];
    str[i] = '=';
    while (s2[++j])
        str[++i] = s2[j];
    return (str);
}

t_env_dll *search_for_env_variable(char *str, t_env_dll *root)
{
    t_env_dll *tmp;
    int len;

    len = my_strlen(str);
    tmp = root;
    while ((tmp = tmp->next) != root)
        if (!my_strncmp(str, tmp->name, len) && tmp->name[len] == '=')
            return (tmp);
    return (NULL);
}

int actualise_path(t_execution *exe, char *str)
{
    double_free(&exe->env->paths);
    if (!str)
        exe->env->paths = NULL;
    else if (!(exe->env->paths =
    get_paths(get_env(exe->env->envp, "PATH="), ':')))
        return (B_FAILURE);
    return (B_SUCCESS);
}

