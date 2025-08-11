/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main with structure
*/

#include "../include/my.h"
#include "../include/mysh.h"

bool check_shell(char *shell)
{
    if (my_strncmp(shell, "cd", 3) == 0)
        return true;
    if (my_strncmp(shell, "env", 3) == 0)
        return true;
    if (my_strncmp(shell, "exit", 5) == 0)
        return true;
    if (my_strncmp(shell, "setenv", 7) == 0)
        return true;
    if (my_strncmp(shell, "unsetenv", 9) == 0)
        return true;
    return false;
}

int do_shell(char **shell, mysh *mini)
{
    if (my_strncmp(shell[0], "cd", 3) == 0)
        my_putstr("is cd\n");
    if (my_strncmp(shell[0], "env", 3) == 0)
        print_env(mini->envp, mini);
    if (my_strncmp(shell[0], "exit", 5) == 0)
        my_exit(0);
    if (my_strncmp(shell[0], "setenv", 7) == 0)
        return my_setenv(shell, mini);
    if (my_strncmp(shell[0], "unsetenv", 9) == 0)
        my_putstr("is unsetenv\n");
    return 0;
}

int exec_command(char *shell, char **buffer, char **env)
{
    int error = 0;
    int status = 0;
    pid_t pid = fork();

    if (pid != 0) {
        wait(&error);
        return (get_segfault(error));
    } else {
        if (execve(shell, buffer, env) == -1) {
            status = exec_error(buffer[0]);
            exit(status);
            return status;
        }
        exit(0);
    }
    return status;
}

int prepare_shell(mysh *mini, char **parsed_shell)
{
    char *shell = get_shell_path(parsed_shell[0], mini);
    
    if (shell)
        return exec_command(shell, parsed_shell, mini->envp);
    else
        return command_not_found(parsed_shell[0]);
    return 0;
}

int exec_shell(mysh *mini, char *shell)
{
    char **shell_line = my_str_to_word_array(shell);
    if (check_shell(shell_line[0])) {
        return do_shell(shell_line, mini);
    } else if (check_slash(shell_line[0])) {
        return exec_slash(shell_line, mini);
    } else {
        return prepare_shell(mini, shell_line);
    }
}