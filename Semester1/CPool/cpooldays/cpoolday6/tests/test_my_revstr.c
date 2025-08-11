/*
** EPITECH PROJECT, 2021
** test_my_revstr.c
** File description:
** Stating with the units tests for the following functions
*/

#include <criterion/criterion.h>

Test(my_revstr, copy_string_in_empty_array)
{
    char srt[6] = {0};

    my_revstr(srt, "Hello");
    cr_assert_str_eq(srt, "olleH");
}
