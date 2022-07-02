/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** Write a function that returns 1 if the number is prime and 0
*/


int my_is_prime (int nb)
{
    int i = 0;

    if (nb == 0 || nb == 1)
        return (0);
        i = i + 2;
    while (i < nb) {
        if (nb % i == 0) {
	        return (0);
        }
        i++;
    }
    return (1);
}