/*
** EPITECH PROJECT, 2021
** test_my_strncpy.c
** File description:
** Starting with the units tests
*/

#include <criterion/criterion.h>

Test(my_strncpy, copy_fiveCharacters_in_empty_array)
{
    char dest[6] = {};

    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}
