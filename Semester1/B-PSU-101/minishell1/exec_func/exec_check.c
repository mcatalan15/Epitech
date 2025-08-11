/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main with structure
*/

#include "../include/my.h"
#include "../include/mysh.h"

int count_path_args(char **path_parse)
{
    int i = 0;

    while (path_parse[i])
        i += 1;
    return i;
}

char *hanled_exec_path(char *path_parse, char *entry)
{
    char *result = NULL;

    if (path_parse == NULL || entry == NULL)
        return NULL;
    result = my_strcat(path_parse, "/");
    result = my_strcat(result, entry);
    return result;
}

char *get_shell_path(char *shell, mysh *mini)
{
    char *result = NULL;
    int i = 0;
    int success = 0;

    for (success == 0 && i <= count_path_args(mini->path_parse) - 1; i +=1;) {
        result = hanled_exec_path(mini->path_parse[i]+5, shell);
        if (access(result, 1) != -1)
            success = 1;
        else {
            success = 0;
        }
    }
    if (success == 0) {
        return NULL;
    }
    else
        return result;
}