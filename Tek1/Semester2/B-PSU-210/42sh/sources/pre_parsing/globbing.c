/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <glob.h>
#include <stdlib.h>
#include "sh.h"

char **is_globbing(char *str)
{
    glob_t gl;
    int i;
    char **tmp;

    i = -1;
    glob(str, GLOB_TILDE_CHECK, NULL, &gl);
    if (gl.gl_pathc <= 0)
        return (NULL);
    if (!(tmp = calloc((int)gl.gl_pathc + 2, sizeof(char *))))
        return (NULL);
    while (++i < (int)gl.gl_pathc)
        if (!(tmp[i] = my_strdup(gl.gl_pathv[i])))
            return (NULL);
    tmp[i] = NULL;
    globfree(&gl);
    return (tmp);
}
