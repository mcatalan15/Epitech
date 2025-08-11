/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** Function that returns a number, sent to the function as a string.
*/

void my_putchar (char c);

int my_strlen(char const *str);

int my_getnbr(char const *str)
{
    int i = 0;
    int nmb = 0;
    int symbol = 1;

    while (str[i] != '\0'){
        if (str[i] == '-')
            symbol = symbol * -1;
        if (str[i] >= '0' && str[i] <= '9'){
            nmb = nmb * 10;
            nmb += str[i] - 48;
        } else if (nmb != 0 && (str[i] < '0' || str[i] > '9')){
            nmb = nmb * symbol;
            return (nmb);
        }
        i++;
    }
    nmb = nmb * symbol;
    return (nmb);
}
