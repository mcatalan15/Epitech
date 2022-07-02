##
## EPITECH PROJECT, 2022
## operations
## File description:
## where the operations happend
##

import global_variable as gb

def equation(n):
    result = (gb.a4 * (n**4) + gb.a3 * (n**3) + gb.a2 * (n**2) + gb.a1 * n + gb.a0)
    return (result)

def equation_derived(x):
    result = (4 * gb.a4 * (x**3) + 3 * gb.a3 * (x**2) + 2 * gb.a2 * x + gb.a1)
    return (result)