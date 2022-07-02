/*
** EPITECH PROJECT, 2021
** header file for my_printf
** File description:
** No description
*/

#ifndef FILE_H
    #define FILE_H
    #define HEX_BASE_LOW "0123456789abcdef"
    #define HEX_BASE_UP "0123456789ABCDEF"
    #define OCT_BASE "01234567"
    #define BIN_BASE "01"

void my_putchar(char);
void my_putstr(char const *);
void my_putnbr(int);
void my_putnbr_u(unsigned int);
void my_putbase(unsigned long long int, char *);
void my_putfloat(double, int);
void my_putnbr_u(unsigned int);

#endif
