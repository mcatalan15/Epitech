/*
** EPITECH PROJECT, 2021
** my_print_revalpha.c
** File description:
** Alphabet display descending starting with z in lowercase
*/

void my_putchar (char c);

int my_print_revalpha (void)
{
    int i = 122;

    while (i >= 97) {
        my_putchar(i);
        i--;
    }

    my_putchar('\n');
    return (0);
}
