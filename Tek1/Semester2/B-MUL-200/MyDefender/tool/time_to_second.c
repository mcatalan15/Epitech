/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** time_to_second
*/

#include "defender.h"

float time_to_second(sfClock *clock)
{
    sfTime time = sfClock_getElapsedTime(clock);
    return (time.microseconds / 1000000.0);
}
