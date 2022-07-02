/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <unistd.h>
#include <stdio.h>
#include "sh.h"
#include "edit.h"

static int bigger_len(t_glob *root)
{
    t_glob *tmp = root;
    int res = 0;

    while ((tmp = tmp->next) != root)
        if ((tmp->len = my_strlen(tmp->data)) > res)
            res = tmp->len;
    return (res);
}

static void write_and_blanks(const int maxlen, int len, const char *str)
{
    int start = len;

    while (start > 0 && str[start] != '/')
        --start;
    start = start ? start + 1 : start;
    write(1, &str[start], len - start);
    while (++len <= maxlen)
        CAP("nd");
}

static int yes_or_no(const int total)
{
    char buffer[1];

    printf("\nDisplay all %d possibilities ? (y/n)\n", total);
    while (42)
        if (read(0, &buffer, 1) <= 0)
            return (FAILURE);
        else if (buffer[0] == 'y')
            return (SUCCESS);
        else if (buffer[0] == '\t');
        else
            return (FAILURE);
}

static void print_list(int maxlen, t_glob *root, const int cols)
{
    int len = 0;
    t_glob *tmp = root;

    while ((tmp = tmp->next) != root) {
        len += maxlen;
        if (len > (cols - 10)) {
            write(1, "\n", 1);
            len = 0;
        }
        write_and_blanks(maxlen, tmp->len, tmp->data);
    }
}

void display_pos(t_gb *root, t_line *line)
{
    int cols;
    int maxlen;

    if (root->total > 42 && yes_or_no(root->total) == FAILURE) {
        replace_cursor(0, 6 + line->pos);
        return;
    }
    if ((cols = get_cols()) == FAILURE)
        return ;
    write(1, "\n", 1);
    maxlen = bigger_len(root->g) + 1;
    if (maxlen * root->total - my_strlen(root->word) < cols)
        maxlen = cols / (root->total) - 5;
    print_list(maxlen, root->g, cols);
    write(1, "\n", 1);
    replace_cursor(0, line->pos + 6);
}

