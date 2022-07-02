/*
** EPITECH PROJECT, 2022
** something.c
** File description:
** the explenation
*/

#include "./lib/my/my.h"
#include "./include/mysh.h"

int find_line(char *line, char **envp)
{
    int i = 0;
    int result = -1;

    if (line == NULL)
        return -1;
    while (envp[i]) {
        if (my_strncmp(line, envp[i], my_strlen(line)) == 0)
            result = i;
        i++;
    }
    return result;
}

char *get_env_line(char *line, char **envp)
{
    int i = 0;
    int pos_path = find_line(line, envp);
    char *result = malloc(sizeof(char) * (my_strlen(envp[pos_path]) + 1));

    while (envp[pos_path][i]) {
        result[i] = envp[pos_path][i];
        i++;
    }
    result[i] = '\0';
    return (result);
}