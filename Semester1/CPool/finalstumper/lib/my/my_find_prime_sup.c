/*
** EPITECH PROJECT, 2021
** my_find_prime_sup
** File description:
** x
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int result = nb;
    int prime = my_is_prime(nb);

    while (prime != 1) {
        result++;
        prime = my_is_prime(result);
    }
    return (result);
}
