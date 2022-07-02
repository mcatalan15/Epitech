/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "lemin.h"

int main(int ac, char **av)
{
    if (ac != 1)
        return (84);
    return (lemin(av));
}