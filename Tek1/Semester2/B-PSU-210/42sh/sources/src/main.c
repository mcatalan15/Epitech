/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include "edit.h"
#include "sh.h"
#include "parser.h"
#include "tokenizer.h"

int main(int ac, char **av, char **env)
{
    t_token *root;
    t_parse_tree *tree;
    t_shell *sh;

    (void)av;
    (void)ac;
    if (!(sh = init_sh(env)))
        return (FAILURE);
    parse_config_file(sh);
    while (!sh->exe->exit && get_line_caps(sh->line) != FAILURE) {
        pre_parsing(sh);
        if (!(root = get_tokens(sh->line->line)))
            return (FAILURE);
        if ((tree = start_parsing(root, sh)) && (sh->exe->return_value = 2))
            exec_cmd(tree, sh->exe);
        free_tokens(root);
        XFREE(sh->line->line);
    }
    add_in_history_file(sh->line);
    return (clean_all(sh));
}
