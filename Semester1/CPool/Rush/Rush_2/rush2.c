/*
** EPITECH PROJECT, 2021
** rush2.c
** File description:
** 
*/
#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c);

int my_str_isalpha(char *str)
{
    int i = 0;
    int Letter = 0;
    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            Letter++;
        i++;
    }
    return (Letter);
}

int my_putstr(char const *str)
{
    int  n = 0;

    while (str[n] != '\0') {
        my_putchar(str[n]);
        n++;
    }
    my_putchar('\n');
    return (0);
}

void my_pos_neg(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
}

int my_put_nbr(int nb)
{
    int n;
    
    my_pos_neg(nb);
    if (nb >= 0) {
        if (nb >= 10) {
            n = (nb % 10);
            nb = (nb - n) / 10;
            my_put_nbr(nb);
            my_putchar(48 + n);
        }
        else {
            my_putchar(48 + nb % 10);
        }
    }
    return (0);
}

void my_print(int counter, char argc, float result)
{
    int integ = result;
    int decimal = result * 100 - integ * 100;

    my_putchar(argc);
    my_putchar(':');
    my_put_nbr(counter);
    my_putchar(' ');
    my_putchar('(');
    my_put_nbr(integ);
    my_putchar('.');
    my_put_nbr(decimal);
    my_putchar('%');
    my_putchar(')');
    my_putchar('\n');
}

char Max_Min(char argc)
{
    char argc2 = '\0';
    if(argc >= 'a' && argc <= 'z') 
        argc2 = argc - 32;
    else if (argc >= 'A' && argc <= 'Z')
        argc2 = argc + 32;
    return (argc2);
}

float Percentage (float len, float counter)
{
    if(len == 0)
        return(0);
    float result = (counter * 100) / (len);
    return (result);
}

void Aux_Compare(char argc, char *argv, char argc2, int Letters)
{
    int counter = 0;
    int i = 0;

    while (argv[i] != '\0') {
        if (argv[i] == argc || argv[i] == argc2) {
            counter++;
        }
        i++;
    }
    my_print(counter, argc, Percentage(Letters, counter));
}

void Compare (char *argc, char *argv, int Letters)
{
    int j = 0;
    char argc2;

    while (argc[j] != '\0') {
        argc2 = Max_Min(argc[j]);
        if (argc2 != '\0') {
            Aux_Compare(argc[j], argv, argc2, Letters);
        }
        j++;
    }
}

void rush2(char *argc, char *argv)
{
    int val = my_str_isalpha(argv);
    Compare(argc, argv, val);
}