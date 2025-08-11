/*
** EPITECH PROJECT, 2021
** my_power.c
** File description:
** return power of a number
*/

int my_power(int nb, int power)
{
    if (power < 0) {
        return 0;
    }
    if (power == 0) {
        return 1;
    }
    return (nb * my_power(nb, power - 1));
}
