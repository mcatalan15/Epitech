/*
** EPITECH PROJECT, 2021
** header file for my_printf
** File description:
** No description
*/

#ifndef PRINTF_H
    #define PRINTF_H
    #include <stdarg.h>
    #include <stdlib.h>

typedef struct printf_s {
    char flag;
    void (*func)(va_list *);
    struct printf_s *next;
} printf_t;

void my_putchar(char);
void my_putstr(char const *);
void print_char(va_list *);
void print_str(va_list *);
void print_str_octal(va_list *);
void print_oct(va_list *);
void print_nbr(va_list *);
void print_nbr_u(va_list *);
void print_hex_low(va_list *);
void print_hex_up(va_list *);
void print_bin(va_list *);
void print_pointer(va_list *);
void print_e(va_list *);

static char flags[13] = {
    's', 'S', 'd', 'i', 'c', 'b',
    'o', 'x', 'X', 'u', 'p', 'e', '\0'
};
static void (*funcs[13])(va_list *) = {
    &print_str, &print_str_octal, &print_nbr,
    &print_nbr, &print_char, &print_bin, &print_oct, &print_hex_low,
    &print_hex_up, &print_nbr_u, &print_pointer, &print_e, NULL
};

#endif
