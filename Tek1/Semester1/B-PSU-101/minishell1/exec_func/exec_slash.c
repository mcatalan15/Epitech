/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main with structure
*/

#include "../include/my.h"
#include "../include/mysh.h"

bool check_slash(char *shell)
{
    if (my_strncmp(shell, "./", 2) == 0)
        return true;
    if (my_strncmp(shell, "/", 1) == 0)
        return true;
    return false;
}

bool check_access_local(char *shell)
{
    if (access(shell, F_OK) != -1)
        return true;
    command_not_found(shell);
        return false;
}

int exec_slash(char **shell, mysh *mini)
{
    if (my_strncmp(shell[0], "./", 2) == 0) {
        if (check_access_local(shell[0]))
            return exec_command(shell[0], shell, mini->envp);
        else
            return 1;
    }
    else if (my_strncmp(shell[0], "/", 1) == 0) {
        if (check_access_local(shell[0]))
            return exec_command(shell[0], shell, mini->envp);
        else
            return 1;
    }
    return 0;
}