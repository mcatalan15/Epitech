/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <glob.h>
#include <string.h>
#include "sh.h"
#include "edit.h"

int get_type(const char *line, int pos)
{
    while (pos > 0 && line[pos] != '|' && line[pos] != ';' && line[pos] != '&')
    {
        if (line[pos] == ' ' || line[pos] == '\t')
            return (ARG);
        --pos;
    }
    return (*line == '/' ? ARG : CMD);
}

char *get_word(char *line, int pos, int *type)
{
    int save;

    save = pos;
    if (pos > (BUFF_LINE))
        return (NULL);
    while (pos > 0 && line[pos] != '|' && line[pos] != ';' && line[pos] != '&')
        {
            if (line[pos] == ' ' || line[pos] == '\t') {
                *type = pos + 1;
                break ;
            }
            --pos;
        }
    if (pos == 0 || line[pos] == '|' || line[pos] == ';' || line[pos] == '&')
        *type = pos;
    return (my_strndup(&line[*type], save - pos));
}
