/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <unistd.h>
#include <term.h>
#include <stdlib.h>
#include "sh.h"

void cap(char *s)
{
    char *tmp;

    if (!s || !(tmp = tgetstr(s, NULL)))
        return ;
    write(1, tmp, my_strlen(tmp));
}
