/*
** EPITECH PROJECT, 2022
** graph.h
** File description:
** ai header
*/

#ifndef AI_H
    #define AI_H

    typedef struct car_s {
        int end;
        int obstacle;
        int front;
        int left;
        int right;
    } car_t;

    char *cmd(char *command, ...);
    void lidar(car_t *status);
    char *forward(car_t *status);
    void direction(car_t *steering);

    int my_printf(const char *, ...);
    static int separator(char c, char g);
    static int count_words(char *str, char g);
    static void dup_n_car(char *new_str, char *str, int begin, int end);
    static void save_words(char **tab, char *str, int nb_words, char g);
    char **my_str_to_wordtab(char *str, char g);

#endif
