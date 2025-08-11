/*
** EPITECH PROJECT, 2022
** something.c
** File description:
** the explenation
*/

#include "../include/my.h"
#include "../include/mysh.h"

int print_env(char **str, mysh *mini)
{
    for (int i = 0; mini->envp[i] != NULL; i++) {
        my_putstr(mini->envp[i]);
        my_putchar('\n');
    }
    return 0;
}