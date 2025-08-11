##
## EPITECH PROJECT, 2022
## cylinder
## File description:
## claculate the cone
##

import sys
import math

from sphere import find_coordenates

def cone(argv):
    point1 = int(sys.argv[2])
    point2 = int(sys.argv[3])
    point3 = int(sys.argv[4])
    vector1 = int(sys.argv[5])
    vector2 = int(sys.argv[6])
    vector3 = int(sys.argv[7])
    degree_angle = int(sys.argv[8])

    
    if (degree_angle < 0 or degree_angle >= 360):
        exit(84)
    
    else:
        print("Cone with a", degree_angle,"degree angle")
        print("Line passing through the point ", (point1, point2, point3), "and parallel to the vector",(vector1,vector2,vector3))
        a = (vector1 * vector1) + (vector2 * vector2) - ((vector3 * vector3)* math.tan(math.radians(degree_angle))**2)
        b = (2*(vector1*point1)) + (2*(vector2*point2) - ((2*(vector3*point3))) * math.tan(math.radians(degree_angle))**2)
        c = ((point1 * point1) + (point2 * point2)) - ((point3 * point3) * math.tan(math.radians(degree_angle))**2)
        delta = (b*b) + (-4*a*c)

        if (delta == 0):
            result = -1*(b/(2*a))
            print ("1 intersection point:")
            find_coordenates(result, argv)
            exit(0)

        elif (delta > 0):
            print ("2 intersection points:")
            base = 2*a
            result_positive = (-1*b+(math.sqrt(delta)))/base
            result_negative = (-1*b-(math.sqrt(delta)))/base
            find_coordenates(result_positive, argv)
            find_coordenates(result_negative, argv)
            exit(0)

        elif (a == 0):
            result = (-c)/b
            find_coordenates(result)
            exit(0)

        else:
            print("No intersection points.")
            exit(0)