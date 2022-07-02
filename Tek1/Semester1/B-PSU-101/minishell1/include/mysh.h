#ifndef MINISHELL1_H_
# define MINISHELL1_H_

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <signal.h>
# include <stdio.h>
# include <sys/stat.h>
#include <stdbool.h>
#include <errno.h>

typedef struct mini
{
    char **envp;
    char **path;
    char **path_parse;
    pid_t pid;
} mysh;

int minimini(char **envp);
int exec_shell(mysh *mini, char *shell);
char *get_env_line(char *line, char **envp);
int find_line(char *line, char **envp);
char **path_to_word_array(char *path_line);
char **malloc_path(char *str);
int count_path_lines(char *line);
int commands(mysh *mini);
int check_spaces(char *shell);
void my_exit(int status);
int exec_slash(char **shell, mysh *mini);
bool check_slash(char *shell);
int print_env(char **str, mysh *mini);
int my_setenv(char **buffer, mysh *mini);
int handling_setenv(char **buffer, int args);
int get_args(char **args);
void free_env(mysh *mini);
int unsetenv_builtin_command(char * const *av, mysh mini);
int exec_slash(char **shell, mysh *mini);
bool check_local(char *shell);
char *get_shell_path(char *shell, mysh *mini);
int exec_error(char *shell);
int get_segfault(int segfault);
int command_not_found(char *shell);
int exec_command(char *shell, char **buffer, char **env);

#endif