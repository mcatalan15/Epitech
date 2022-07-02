##
## EPITECH PROJECT, 2022
## bisection
## File description:
## calculates 4th degree equation with bisection method
##

from operations import equation
import global_variable as gb

def bisection (n):
    point_A = 0
    point_B = 1
    equation_of_A = equation(point_A)
    center = 0
    saver = 1

    while abs(center - saver) > (10**(-n)):
        saver = center
        center = (point_A + point_B) / 2
        if equation_of_A * equation(center) < 0:
            point_B = center
        else:
            point_A = center
        if (10**n) * center % 1 == 0:
            print("x =", center)
        else:
            print("x = %.*f" % (gb.n, center))
    exit(0)

