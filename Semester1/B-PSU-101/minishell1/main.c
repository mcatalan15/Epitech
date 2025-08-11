/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main for minmini
*/

#include "./lib/my/my.h"
#include "./include/mysh.h"

int main(int argc, char **argv, char **envp)
{
    if (argc > 2 || find_line("PATH=", envp) == -1)
        return 84;
    return minimini(envp);
}