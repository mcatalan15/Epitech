/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** Reproduce the behavior of the strstr function
*/

#include <stdio.h>

char *my_strstr (char *str , char const *to_find)
{
    char *temp = str;
    int i = 0;
    while (str[i] != *to_find ) {
        *temp = str[i];
        i++;
        temp++;
    }
    *str = *temp;
    *str++ = '\0';
    printf("%s\n",str);
    return(str);
}

int main ()
{
    char str[] = "Hola pedro";
    char to_find[] = "l";

    my_strstr(str, to_find);
}
