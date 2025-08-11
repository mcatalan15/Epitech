/*
** EPITECH PROJECT, 2021
** my_isneg.c
** File description:
** Num if it's negative show n, if it's positive or null P
*/
void my_putchar (char c);

int my_isneg (int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    my_putchar('\n');
    return (0);
}
