/*
** EPITECH PROJECT, 2021
** main
** File description:
** main file for printf
*/

#include "my_printf.h"
#include <stdarg.h>
#include <stdlib.h>

void create_list(printf_t *list)
{
    int i = 0;
    while (flags[i] != '\0') {
        printf_t *new = malloc(sizeof(printf_t));
        list->flag = flags[i];
        list->func = funcs[i];
        list->next = new;
        list = new;
        i++;
    }
    list->next = NULL;
}

void find_n_print(printf_t *list, va_list *args, char flag)
{
    while (list->next) {
        if (flag == list->flag) {
            list->func(args);
        }
        list = list->next;
    }
}

void free_list(printf_t *list)
{
    printf_t *tmp = list;
    if (list) {
        free_list(list->next);
        free(list);
    }
}

int check_flag(char flag)
{
    int i = 0;
    while (flags[i]) {
        if (flag == flags[i]) {
            return 1;
        }
        i++;
    }
    return 0;
}

int my_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    printf_t *list = malloc(sizeof(printf_t));
    create_list(list);
    int i = 0;
    while (format[i] != '\0') {
        if (format[i] == '%' && check_flag(format[i + 1])) {
            i++;
            find_n_print(list, &args, format[i]);
        } else if (format[i] == '%' && format[i + 1] == '%') {
            my_putchar(format[i]);
            i++;
        } else {
            my_putchar(format[i]);
        }
        i++;
    }
    va_end(args);
    free_list(list);
    return 0;
}
