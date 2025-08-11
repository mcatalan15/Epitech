/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <unistd.h>
#include "sh.h"

static int fx(const char *env, const char *info, int len)
{
    int i = 0;

    while (i < len && info[i] == env[i])
        i++;
    if (i > len - 1)
        return (SUCCESS);
    return (FAILURE);
}

char *get_env(char **env, char *info)
{
    int i = 0;
    int j = my_strlen(info);

    while (env && env[i]) {
        if (fx(env[i], info, j) == 1)
            return (&env[i][j]);
        i++;
        }
    return (NULL);
}

void free_tokens(t_token *root)
{
    t_token *tmp = root;
    t_token *save = root->prev;

    while ((tmp = tmp->next) != root)
        XFREE(tmp->prev);
    XFREE(save);
}
