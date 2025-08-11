/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "parser.h"
#include "tokenizer.h"
#include "sh.h"

int delete_filename_token(t_token *token, int flag)
{
    token->prev->next = token->next;
    token->next->prev = token->prev;
    if (flag)
        XFREE(token);
    else
        token->data = NULL;
    token = NULL;
    return (SUCCESS);
}

int double_left(t_red *red)
{
    if (read_while(red) == FAILURE)
        return (FAILURE);
    red->token = 1;
    red->name = TMP_FILE;
    return (SUCCESS);
}
