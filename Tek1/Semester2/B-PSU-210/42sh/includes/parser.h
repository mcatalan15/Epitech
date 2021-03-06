/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#ifndef PARSER_H_
# define PARSER_H_

# include "typedefs.h"

# define BEG_SEM (token->prev->token == T_EOL && token->token == T_SEM)
# define LAST_PIPE (token->next->token == T_EOL ? 1 : 0)
# define _MEM_POOL (1024)
# define BEFORE 0
# define AFTER 1
# define SIMPLE_RED__ (O_CREAT | O_TRUNC | O_WRONLY)
# define __SIMPLE_RED   O_RDONLY
# define DOUBLE_RED__ (O_CREAT | O_APPEND | O_WRONLY)
# define IS_EXEC(s) (!access(s, X_OK) && !is_dir(s) ? 1 : 0)

int main(int, char **, char **);
int speed_cmp(char *, char *);
void free_tokens(t_token *);
char **get_paths(char *, char);
char *get_env(char **, char *);
void free_token(t_token *);
int x_free(void *);
int execution_loop(t_cmd *, t_execution *);
int find_path(t_cmd *, t_execution *exe);
int lex_error(int, int, int);
int create_new_cmd_node(t_cmd *);
int create_new_tree_node(t_parse_tree *, t_token *);
int add_token_in_node(t_parse_tree *, t_token *, t_shell *);
void *free_tree(t_parse_tree *);
void display_tree(t_parse_tree *);
int redirections(t_cmd *, t_token *, t_execution *);
int expected_after_pipe();
int delete_filename_token(t_token *token, int flag);
int double_left(t_red *red);
int read_while(t_red *red);

#endif
