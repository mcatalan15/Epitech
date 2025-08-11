/*
** EPITECH PROJECT, 2021
** grep.c
** File description:
** grep function
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>
#include "./include/my.h"

int print_line(char *file, int ini)
{
    int i = ini;

    while ((file[i] != '\n') && (file[i] != '\0')) {
        my_putchar(file[i]);
        i++;
    }
    my_putchar('\n');
    return (0);
}

int find(char *str, char *file, int len)
{
    int i = 0;
    int j = 0;
    int ini = 0;
    while (file[i] != '\0') {
        j = 0;
        while (file[i] == str[j]) {
            i++;
            j++;
        }
        if (len == j)
            print_line(file, ini);
        if (file[i-1] == '\n')
            ini = i;
        i++;
    }
    return (0);
}

int print_documents (int ac, char **files)
{
    int i = 2;
    int size = 0;
    char buffer[30000];
    int file_direct;

    while (i < ac) {
        file_direct = open( files[i], O_RDONLY);
        if (file_direct == -1) {
            return (84);
        }
        size = read(file_direct, buffer, 30000);
        buffer[size] = ' ';
        buffer[size+1] = '\0';
        find (files[1], buffer, my_strlen(files[1]));
        close(file_direct);
        i++;
    }
    return (0);
}

int main (int ac, char **files)
{
    print_documents(ac, files);
    return (0);
}
