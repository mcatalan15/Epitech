/*
** EPITECH PROJECT, 2021
** concat_params.c
** File description:
** showing word in arrays
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c);

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return(0);
}

char *my_strconcate(char *dest, char *const *tab)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (tab[i] != NULL)
    {
        while (tab[i][j] != '\0')
        {
            dest[k] = tab[i][j];
            k++;
            j++;
        }
        j = 0;
        dest[k] = '\n';
        k++;
        i++;

    }
    return (dest);
}

int my_show_word_array(char * const *tab)
{
    int i = 0;
    char *dest;
    int len = 0;

    while (tab[i] != NULL) {
        len += my_strlen(tab[i]);
        i++;
    }
    len += i;
    dest = malloc(sizeof(char) * (len+1));
    my_strconcate (dest, tab);
    my_putstr(dest);
    return (0);
}
