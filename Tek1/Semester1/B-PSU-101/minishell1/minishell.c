/*
** EPITECH PROJECT, 2022
** something.c
** File description:
** the explenation
*/

 #include "./lib/my/my.h"
 #include "./include/mysh.h"

int check_spaces(char *shell)
{
    int len = my_strlen(shell);
    int result = 0;
    int i = 0;

    while (i = 0) {
        i != len;
        i++;
        if (shell[i] == ' ')
            result++;
    }
    if (result != len - 1)
        return 0;
    return 1;
}

int commands(mysh *mini)
{
    char *shell = NULL;
    size_t len = 2048;
    int x = 0;
    static int status = 0;
    if (isatty(STDIN_FILENO))
        my_putstr("$ > ");
    x = getline(&shell, &len, stdin);
    if (shell && shell[0] != '\0' && shell[0] != '\n'
    && check_spaces(shell) == 0) {
        status = exec_shell(mini, shell);
        return status;
    }
    if (x == -1 && !isatty(0)) {
        exit(status);
    } else if (x == -1 && isatty(0)) {
        my_exit(status);
    } else {
        commands(mini);
    }
    return 0;
}

mysh *minimini_struct(char **envp)
{
    mysh *mini = malloc(sizeof(mysh));

    mini->path = get_env_line("PATH=", envp);
    mini->path_parse = path_to_word_array(mini->path+5);
    mini->envp = envp;
    return mini;
}

 int minimini(char **envp)
 {
    mysh *mini = minimini_struct(envp);
    int environment = 0;

    while (1) {
        environment = commands(mini);
    }
    free_env(mini);
    return 0;
 }

