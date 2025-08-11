/*
** EPITECH PROJECT, 2022
** something.c
** File description:
** the explenation
*/

#include "./lib/my/my.h"
#include "./include/mysh.h"

int count_path_lines(char *line)
{
    int result = 0;

    if (line == NULL || my_strlen(line) <= 5)
        return 84;
    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == ':')
            result++;
    }
    return (result + 1);
}

char **malloc_path(char *str)
{
    char **result = malloc(sizeof(char *) * (count_path_lines(str) + 1));
    int j = 0;
    int k = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ':') {
            result[k] = malloc(sizeof(char) *(j + 1));
            result[k][j] = '\0';
            k++;
            j = 0;
        } else
            j++;
    }
    result[k] = malloc(sizeof(char) *(j + 1));
    result[k][j] = '\0';
    return (result);
}

char **path_to_word_array(char *path_line)
{
    int i = 0;
    int line = 0;
    int letter = 0;
    char **result = malloc_path(path_line);

    while (path_line[i] != '\0' && path_line[i] != '\n') {
        if (path_line[i] == ':') {
            result[line][letter] = '\0';
            line++;
            letter = 0;
        } else {
            result[line][letter] = path_line[i];
            letter++;
        }
        i++;
    }
    result[line][letter] = '\0';
    result[line + 1] = NULL;
    return (result);
}