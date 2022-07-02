##
## EPITECH PROJECT, 2022
## newton
## File description:
## calculate 4th degree equations with newton's method
##

from sys import *
import global_variable as gb
from operations import equation, equation_derived

def newton(n):
    saver = 0.5
    center = 0
    i = 0

    while (abs(center - saver) > 10**(-n)):
        center = saver
        i += 1
        if (10** gb.n * saver % 1) == 0:
            print("x =", saver)
        else:
            print("x = %.*f" % (gb.n, saver))
        saver = saver - (equation(saver) / equation_derived(saver))
        if (i > 15):
            print("Calcul Error\n")
            exit (84)