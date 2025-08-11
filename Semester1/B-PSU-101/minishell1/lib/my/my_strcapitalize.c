/*
** EPITECH PROJECT, 2021
** my_strcapitalize.c
** File description:
** x
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i-1] == 43 || str[i-1] == 45 || str[i-1] == 32 || i == 0) {
            if (str[i] >= 97 && str[i] <= 122) {
                str[i] -= 32;
            }
        }else if (str[i-1] >= 48 || str[i-1] <= 57) {
            if (str[i] >= 65 && str[i] <= 90) {
                str[i] += 32;
            }
        } i++;
    }
    return (0);
}
