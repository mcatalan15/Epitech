/*
** EPITECH PROJECT, 2021
** my_evil_str
** File description:
** Swap each of the string’s characters
*/

int my_word_cont (char const *str)
{
    int x = 0;
    while (str[x] != '\0') {
        x++;
    }
    return (x);
}

char *my_evil_str (char *str)
{
    int length = my_word_cont(str);
    char temp = 0;
    int i = 0;
    int right = length - 1;

    while (i < right) {
        temp = str[i];
        str[i] = str[right];
        str[right] = temp;
        i++;
        right--;
    }
    return (str);    
}
