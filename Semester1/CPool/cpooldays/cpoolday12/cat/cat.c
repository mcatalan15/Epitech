/*
** EPITECH PROJECT, 2021
** cat
** File description:
** function imitates cat
*/

#include "./include/my.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>

int print_documents (int ac, char **files)
{
    int i = 0;
    char buffer[30000];
    char file_direct;
    int size = 0;

    while (i < ac) {
        file_direct = open( files[i], O_RDONLY);
        if (file_direct == -1) {
            my_putstr("Error with open\n");
            return (84);
        }
        size = read(file_direct, buffer, 30000);
        my_putstr(buffer);
        buffer[size] = '\0';
        close(file_direct);
        i++;
    }
    return (0);
}

int cat(int ac, char **files)
{
    int file_direct;
    char buffer[30000];

    if (ac == 1) {
        file_direct = open("./cat.c", O_RDONLY);
        read(file_direct, buffer, 30000);
        my_putstr(buffer);
        close(file_direct);
    }
    else {
        print_documents( ac, files);
    }
    return (0);
}

int main(int ac, char **av)
{
    cat(ac, av);
}
