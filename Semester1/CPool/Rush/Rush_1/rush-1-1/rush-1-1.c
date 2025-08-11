/*
** EPITECH PROJECT, 2021
** rush_1_1
** File description:
** Display a square on the screen
*/

#include <unistd.h>

void my_putchar (char c);

int error_display(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    } 
    return(0);
}

int horizontal (int x, int y)
{
    int i = 0;

    while (i != x  && y > 0){
        if (i == 0) {
            my_putchar(111);
        }
        if ( i == x - 1){
            my_putchar(111);
        }
        if (i > 0 && i < x - 1) {
            my_putchar(45);
        }
        i++;
    }
    return(x);
}

void space_counter(int j, int x)
{
    while (j != x - 2) {
        my_putchar(32);
        j++;
    }
}

void exception_cases(int x, int y, int i, int j)
{
    if (i > 0 && i <= y) {
        if ( x == 1 ){
            my_putchar(32);
        } else if ( x == 0){
            my_putchar(error_display("Invalid size\n"));
        } else {
            space_counter(j,x);
            my_putchar(124);
        }
    }
}

int vertical (int x,  int y)
{
    int i = 0;
    int j = 0;

    while (i != y ) {
        if (i > 0 && i < y - 1) {
            my_putchar(*"\n");
            my_putchar(124);
            exception_cases(x,y,i,j);
        }
        i++;
        j = 0;
    }
    return(y);
}

void rush (int x, int y)
{
    if ((x<0 && x < 2147483647) || (y<0 && y < 2147483647)){
        my_putchar(error_display("Invalid size\n"));
    } else {
        horizontal(x,y);
        vertical(x, y);
        my_putchar(*"\n");
        if (y >= 2){
            horizontal(x,y);
        }
        my_putchar(*"\n");
    }
}
