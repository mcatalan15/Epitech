/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <sys/ioctl.h>
#include "edit.h"

int get_cols(void)
{
    struct winsize	w;

    if (ioctl(0, TIOCGWINSZ, &w) == -1)
        return (FAILURE);
    return (w.ws_col);
}
