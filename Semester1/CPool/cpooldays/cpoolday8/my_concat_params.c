/*
** EPITECH PROJECT, 2021
** concat_params
** File description:
** A function that turns the command-line given arguments into a single string
*/

#include <stdio.h>
#include <stdlib.h>

int my_strlen( char const *str)
{
    int i = 0;
    while( str[i] != '\0')
    {
        i++;
    }
    return (i);
}
void my_putchar(char c);

int my_putstr( char const *str)
{
    int i = 0;
     
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

char *my_strconcate ( char *dest, int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    
    while (i < argc)
    {
        while ( argv[i][j] != '\0')
        {
            dest[k] = argv[i][j];
            k++;
            j++;
        }
        j = 0;
        if (i < argc - 1)
        {
            dest[k] = '\n';
            k++;
        }
        else
            k++;
        i++;
        
    }
    return(dest);
}

char *concat_params(int argc , char **argv)
{
    int i = 0;
    char *dest;
    int len =0;

    while(i < argc ) {
    len += my_strlen(argv[i]);
    i++;
    }
    len += argc;
    dest = malloc(sizeof(char) * (len + argc -1));

    my_strconcate ( dest, argc, argv);
    return (dest);

}
