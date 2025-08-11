/*
** EPITECH PROJECT, 2021
** my_print_digits
** File description:
** Digits display ascending
*/
void my_putchar (char c);

int my_print_digits (void)
{
    int i = 48;

    while (i <= 57) {
        my_putchar(i);
        i++;
    }
    my_putchar('\n');
    return (0);
}
