/*
** EPITECH PROJECT, 2022
** something.c
** File description:
** the explenation
*/

 #include "./lib/my/my.h"
 #include "./include/mysh.h"

void free_array(char **buf_array)
{
    for (int i = 0; buf_array[i] != NULL; i++) {
        free(buf_array[i]);
    }
    free(buf_array);
}

void free_env(mysh *mini)
{
    free_array(mini->envp);
    free_array(mini->path_parse);
    free(mini->path);
}