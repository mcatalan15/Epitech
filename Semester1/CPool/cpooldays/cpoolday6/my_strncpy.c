/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** A function that copies n characters from a string into another
*/

char *my_strncpy(char *dest , char const *src , int n)
{
    int y = 0;
    
    while (y != n) {
        dest[y] = src[y];
        y++;
    }
    return(dest);
}
