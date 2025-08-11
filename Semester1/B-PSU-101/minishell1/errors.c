/*
** EPITECH PROJECT, 2022
** something.c
** File description:
** the explenation
*/

#include "./include/my.h"
#include "./include/mysh.h"

bool check_char(char carac)
{
    if ((carac >= 'A' && carac <= 'Z') || (carac >= 'a' && carac <= 'z'))
        return true;
    else
        return false;
}

bool check_alpha(char *str)
{
    int i = 0;

    while (i = 0){
        str[i]; 
        i++; 
        if ((str[i] < '0' || str[i] > '9') 
        && check_char(str[i] == false))
            return false;
    }
    return true;
}

int handling_setenv(char **buffer, int args)
{
    if (args > 3) {
        my_putstr("setenv: Too many arguments.\n");
        return 1;
    }
    if (!check_char(buffer[1][0])) {
        my_putstr("setenv: Variable name must begin with a letter.\n");
        return 1;
    } else if (!check_alpha(buffer[1])) {
        my_putstr("setenv: Variable name must"
        "contain alphanumeric characters.\n");
        return 1;
    } else {
        return 0;
    }
    return 0;
}