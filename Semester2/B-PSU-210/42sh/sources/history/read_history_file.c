/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

#include <unistd.h>
#include <fcntl.h>
#include "edit.h"
#include "sh.h"

int add_in_history_file(t_line *line)
{
    int fd = open("./.history", (O_RDWR | O_CREAT | O_TRUNC), 0777);
    t_history *tmp = line->sh->history;
    t_history *save = tmp->prev;
    int i = -1;

    while ((tmp = tmp->next) != line->sh->history) {
        if (++i < line->sh->hist_limit && tmp->data && fd != -1) {
            write(fd, tmp->data, my_strlen(tmp->data));
            write(fd, "\n", 1);
        }
        XFREE(tmp->data);
        XFREE(tmp->prev);
    }
    XFREE(save);
    XFREE(line);
    if (fd != -1)
        close(fd);
    return (SUCCESS);
}
