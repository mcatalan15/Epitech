##
## EPITECH PROJECT, 2022
## cylinder
## File description:
## claculate the cylinder
##

import sys
import math

from sphere import find_coordenates

def cylinder(argv):
    point1 = int(sys.argv[2])
    point2 = int(sys.argv[3])
    point3 = int(sys.argv[4])
    vector1 = int(sys.argv[5])
    vector2 = int(sys.argv[6])
    vector3 = int(sys.argv[7])
    radius = int(sys.argv[8])

    
    if (radius > 0):

        print("Cylinder of radius", radius)
        print("Line passing through the point ",(point1, point2, point3), "and parallel to the vector",(vector1,vector2,vector3))
        a = (vector1 * vector1) + (vector2 * vector2)
        b = 2*((point1 * vector1) + (point2 * vector2))
        c = ((point1 * point1) + (point2 * point2) - (radius * radius))

        delta = (b*b) + (-4*a*c)

        if (delta == 0):
            if (b == 0 and a == 0):
                print("There is an infinite number of intersection points.")
                exit(0)
            else:
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
        else:
            print("No intersection points.")
            exit(0)
    
    else:
        exit(84)