/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdlib.h>
#include "tokenizer.h"

static int tokenizer_parsing(t_token *root, int i)
{
    if (root->data[i] == '\0')
        return (SUCCESS);
    if (IS_SEP(root->data[i]) == FALSE)
        if ((i = add_token_in_list(root, i)) == FAILURE)
            return (FAILURE);
    return (tokenizer_parsing(root, ++i));
}

static t_token *init_root(void)
{
    t_token *root;

    if (!(root = calloc(1, sizeof(t_token))))
        return (NULL);
    root->token = T_EOL;
    root->prev = root;
    root->next = root;
    return (root);
}

t_token *get_tokens(char *str)
{
    t_token *root;

    root = init_root();
    if (!root)
        return (NULL);
    root->data = str;
    if (tokenizer_parsing(root, 0) == FAILURE)
        return (NULL);
    return (root);
}
