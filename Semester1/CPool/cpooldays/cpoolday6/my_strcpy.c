/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** A function that copies a string into another
*/

char *my_strcpy(char *dest , char const *src)
{
    while (*src != '\0' ) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest++ = '\0';
    return(dest);
}
