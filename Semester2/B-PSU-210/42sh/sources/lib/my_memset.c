/*
** EPITECH PROJECT, 2022
** 42sh
** File description:
** 42sh
*/

void *my_memset(void *data, char value, int size)
{
    int i;

    i = -1;
    while (++i < size)
        ((char *)data)[i] = value;
    return (data);
}
