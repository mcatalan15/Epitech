##
## EPITECH PROJECT, 2022
## secant
## File description:
## calculate 4th degree equations with secant method
##

from operations import equation
import global_variable as gb

def secant(n):
    point_A = 0
    point_B = 1

    while (abs( point_A - point_B) > (10 ** (-n))):
        saver = point_B - ((point_B - point_A) / (equation(point_B) - equation(point_A))) * equation(point_B)
        point_A = point_B
        point_B = saver
        if ((10 **n) * saver % 1 == 0):
            print("x =",saver)
        else:
            print("x = %.*f" % (gb.n, saver))
    exit(0)
