/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "parser.h"
#include "tokenizer.h"
#include "sh.h"

extern const char *token_tab[T_NBR + 1];

int find_red_token(int token)
{
    static const int tr_tab[6] = {T_RED_CC, T_RED_C, T_RED_D, T_RED_DD,
    T_AMP_R, T_R_AMP};
    int i = -1;

    while (++i < 6)
        if (token == tr_tab[i])
            return (i);
    return (-1);
}

int error_handling(int tk1, int tk2)
{
    if (tk2 == T_EOL)
        return (error_handling(tk1, tk2 + 1));
    X_ERROR("Syntax Error : unexpected token ");
    X_ERROR("'%s' after '%s' redirection token\n",
    token_tab[tk2], token_tab[tk1]);
    return (FAILURE);
}

int read_while(t_red *red)
{
    char *s;
    int fd = open(TMP_FILE, O_CREAT | O_TRUNC | O_WRONLY, 0644);

    if (fd < 0)
        return (_ERROR("Cannot Read File"));
    write(1, ">", 1);
    while ((s = gnl(0))) {
        if (!my_strcmp(red->name, s))
            break ;
        else
            write(fd, s, my_strlen(s));
        write(fd, "\n", 1);
        write(1, ">", 1);
        XFREE(s);
    }
    XFREE(s);
    close(fd);
    return (SUCCESS);
}

int fill_red_struct(t_token *token, t_cmd *cmd, int red_token,
                    t_execution *exe)
{
    t_red *tmp;
    static int op_tab[6] = {0, READ_ONLY, TRUNC, APPEND, TRUNC, APPEND};

    if (!cmd->red[red_token / 2] &&
    !(cmd->red[red_token / 2] = calloc(1, sizeof(t_red))))
        return (FAILURE);
    tmp = cmd->red[red_token / 2];
    tmp->name = token->next->data;
    tmp->name[token->next->data_size] = 0;
    tmp->token = red_token;
    if (red_token <= 0 && exe->input)
        double_left(tmp);
    else if ((tmp->fd = open(tmp->name, op_tab[tmp->token], 0644)) != -1)
    close(tmp->fd);
    return (SUCCESS);
}

int redirections(t_cmd *cmd, t_token *token, t_execution *exe)
{
    int red_token;

    if (token->next->token != T_CMD)
        return (error_handling(token->token, token->next->token));
    red_token = find_red_token(token->token);
    if (fill_red_struct(token, cmd, red_token, exe) == FAILURE)
        return (FAILURE);
    delete_filename_token(token->next, 1);
    delete_filename_token(token, 0);
    return (SUCCESS);
}
