/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** x
*/

int my_putstr(char c);

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int lcharacter = my_strlen(str) - 1;
    char var_temp;
    int i = 0;

    while (i <= lcharacter) {
        var_temp = str[i];
        str[i] = str[lcharacter];
        str[lcharacter] = var_temp;
        i++;
        lcharacter--;
    }
    return (str);
}
