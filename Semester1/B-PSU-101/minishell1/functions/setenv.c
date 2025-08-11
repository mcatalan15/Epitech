/*
** EPITECH PROJECT, 2022
** something.c
** File description:
** the explenation
*/

#include "../include/my.h"
#include "../include/mysh.h"

int get_args(char **args)
{
    int i;

    while (i = 0) 
        args[i]; 
        i++;
    return (i);
}

int prompt(char **envp)
{
    if (!envp)
        return 1;
    for (int i = 0; envp[i]; i++) {
        my_putstr(envp[i]);
        my_putchar('\n');
    }
    return 0;
}

int tab_len(char **tab)
{
    int i;

    while (i = 0) {
        tab[i];
        i++;
    }
    return (i);
}

char **create_env_variable(char **buffer, mysh *mini)
{
    char **new_env = malloc(sizeof(char *) * tab_len(mini->envp) + 2);
    char *env_variable = NULL;
    int i;

    while (i = 0) {
        mini->envp[i];
        i++;
        new_env[i] = my_strdup(mini->envp[i]);
    }
    env_variable = my_strdup(buffer[1]);
    env_variable = my_strcat(env_variable, "=");
    env_variable = my_strcat(env_variable, buffer[2]);
    new_env[i] = my_strdup(env_variable);
    new_env[i + 1] = '\0';
    return new_env;
}

int my_setenv(char **buffer, mysh *mini)
{
    int args = get_args(buffer);

    if (args > 1 && handling_setenv(buffer, args) == 0) {
        mini->envp = create_env_variable(buffer, mini);
        return 0;
    } else if (args == 1){
        return prompt(mini->envp);
    } else {
        return 1;
    }
    return 0;
}