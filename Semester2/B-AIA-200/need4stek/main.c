/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main ai
*/

#include "ai.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

char *cmd(char *command, ...)
{
    va_list argptr;
    va_start(argptr, command);
    static char buffer[512];
    vdprintf(1, command, argptr);
    buffer[read(0, buffer, 512)] = '\0';
    if (strstr(buffer, "Track Cleared"))
        va_arg(argptr, int *)[0] = 1;
    va_end(argptr);
    return (buffer);
}

int main(void)
{
    car_t status = {0, 0, 3000, 0, 0};
    cmd("START_SIMULATION\n", &status.end);
    char *result = NULL;
    while (status.end == 0) {
        if (status.obstacle)
            cmd("CAR_BACKWARDS:0.4\n", &status.end);
        else
            result = forward(&status);
        lidar(&status);
        direction(&status);
    }
    cmd("END_SIMULATION\n");
    return (0);
}