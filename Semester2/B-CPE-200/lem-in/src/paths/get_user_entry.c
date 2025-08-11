/*
** EPITECH PROJECT, 2022
** get_user_entry
** File description:
** get_entry
*/

#include "lemin.h"
#include "structs.h"

static void add_entry_to_tunnels(char *old_entry, char ***tunnels)
{
    char **new_tunnels = NULL;
    int length = 0;

    for (; (*tunnels)[length]; length++);
    new_tunnels = malloc(sizeof(char *) * (length + 2));
    for (int i = 0; i < length; i++)
        new_tunnels[i] = (*tunnels)[i];
    new_tunnels[length] = old_entry;
    new_tunnels[length + 1] = NULL;
    free(*tunnels);
    *tunnels = new_tunnels;
}

char *get_entry(char *old_entry, char ***tunnels)
{
    size_t size = 0;

    old_entry = NULL;
    size = getline(&old_entry, &size, stdin);
    if (size == -1)
        return (NULL);
    old_entry[old_entry[size - 1] == '\n' ? size - 1 : size] = '\0';
    add_entry_to_tunnels(old_entry, tunnels);
    return (old_entry);
}