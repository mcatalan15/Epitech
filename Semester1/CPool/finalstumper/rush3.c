/*
** EPITECH PROJECT, 2021
** rush3
** File description:
** Reading the output of the diferent rushes
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

int my_putstr(char const *str);

int results(char *buff);

int columns(char *buff);

int rows(char *buff);

int my_put_nbr(int nb);

int my_print(int columns, int rows);

int caso3(char *buff)
{
    int x = 0;
    int columns = 0;
    int i = 0;
    int all = 0;
    int rows = 0;

    while (buff[x] != '\n') {
        x++;
    }
    columns = x;

    while (buff[i] != '\0') {
        i++;
    }
    all = i;
    rows = all / (columns + 1);
    my_print(columns, rows);
    return 0;
}

int caso2(char *buff)
{
    my_putstr("[rush1-2] ");
    results(buff);
    return 0;
}

int caso1(char *buff)
{
    my_putstr("[rush1-1] ");
    results(buff);
    return 0;
}

int rush3(char *buff)
{
    if (buff[0] == 'o') {
        caso1(buff);
    } else if (buff[0] == '*' || buff[0] == '/') {
        caso2(buff);
    } else {
        caso3(buff);
    }
    return 0;
}

int main(void)
{
    char buff[BUFSIZ + 1];
    int offset = 0;
    int len ;
    while ((len = read(0, buff + offset, BUFSIZ - offset)) > 0) {
        offset = offset + len;
    }
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    rush3(buff);
    return 0;
}
