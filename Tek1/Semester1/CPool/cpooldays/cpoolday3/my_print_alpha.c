/*
** EPITECH PROJECT, 2021
** my_print_alpha.c
** File description:
** Alphabet display ascending starting with a in lowercase
*/
void my_putchar (char c);

int my_print_alpha (void)
{
    int i = 97;

    while (i <= 122) {
        my_putchar(i);
        i++;
    }
    my_putchar('\n');
    return (0);
}
