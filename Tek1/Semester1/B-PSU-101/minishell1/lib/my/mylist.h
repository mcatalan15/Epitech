/*
** EPITECH PROJECT, 2021
** mylist.h
** File description:
** x
*/

#ifndef MYLIST_H
#define MYLIST_H_
#include "my.h"
#include <stdlib.h>

typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t;

#endif
