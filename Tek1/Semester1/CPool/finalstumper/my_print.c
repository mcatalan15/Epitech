/*
** EPITECH PROJECT, 2021
** my_print
** File description:
** print for cases with 1
*/

int my_put_nbr(int nb);

int my_putstr(char const *str);

void my_putchar(char c);

int my_print(int columns, int rows)
{
    if (rows == 1 || columns == 1) {
        my_putstr("[rush1-3] ");
        my_put_nbr(columns);
        my_putchar(' ');
        my_put_nbr(rows);
        my_putstr(" || [rush1-4] ");
        my_put_nbr(columns);
        my_putchar(' ');
        my_put_nbr(rows);
        my_putstr(" || [rush1-5] ");
        my_put_nbr(columns);
        my_putchar(' ');
        my_put_nbr(rows);
        my_putchar('\n');
    } else
        my_putstr("none\n");
    return 0;
}
