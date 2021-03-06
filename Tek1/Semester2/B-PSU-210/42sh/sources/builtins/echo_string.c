/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "sh.h"

static const t_echo	g_esc[] = {
    {'\\', '\\'},
    {'a', '\a'},
    {'b', '\b'},
    {'c', 'c'},
    {'e', 'e'},
    {'f', '\f'},
    {'n', '\n'},
    {'r', '\r'},
    {'t', '\t'},
    {'v', '\v'}
};

static int byte_printer(char *str, int *i)
{
    int byte;
    char oct[3];
    char hex[2];

    if (str[(*i) + 1] == 'x')
        {
            hex[0] = str[(*i) + 2];
            hex[1] = str[(*i) + 3];
            byte = strtol(hex, 0, 16);
            write(1, &byte, 1);
            (*i) = (*i) + 3;
            return (0);
        }
    else
        {
            oct[0] = str[(*i) + 2];
            oct[1] = str[(*i) + 3];
            oct[2] = str[(*i) + 4];
            byte = strtol(oct, 0, 8);
            write(1, &byte, 1);
            (*i) = (*i) + 4;
        }
    return (0);
}

static int escape_code_parsing(const t_echo g_esc[], char *str, int *i)
{
    int j;
    char escape_code[2];

    j = -1;
    escape_code[0] = str[(*i)];
    escape_code[1] = str[(*i) + 1];
    if (escape_code[1] == '0' || escape_code[1] == 'x')
        return (byte_printer(str, i));
    while (escape_code[1] != g_esc[j].second)
        j++;
    write(1, &(g_esc[j].code), 1);
    (*i)++;
    return (0);
}

static int write_echo(char *str, char *flagstatus, const t_echo g_esc[])
{
    int i;

    i = -1;
    if (flagstatus[1] == 1) {
        while (str[++i] != 0) {
            if (str[i] == 92)
                escape_code_parsing(g_esc, str, &i);
            else
                write(1, &str[i], 1);
        }
    }
    else
        write(1, str, my_strlen(str));
    return (0);
}

int find_strings(char **stock, char *flagstatus)
{
    int i;

    i = 1;
    while (stock[i] != NULL) {
        if ((my_strcmp(stock[i], "-n")) == 0 ||
        (my_strcmp(stock[i], "-e")) == 0 ||
        (my_strcmp(stock[i], "-E")) == 0)
            i++;
        else {
            write_echo(stock[i++], flagstatus, g_esc);
            if (stock[i] != NULL)
                write(1, " ", 1);
        }
    }
    if (flagstatus[0] == 0)
        write(1, "\n", 1);
    return (0);
}
