##
## EPITECH PROJECT, 2022
## sphere
## File description:
## calculate the sphere 
##

import sys
import math
from types import resolve_bases

def find_coordenates(result, argv):
    point1 = int(sys.argv[2])
    point2 = int(sys.argv[3])
    point3 = int(sys.argv[4])
    vector1 = int(sys.argv[5])
    vector2 = int(sys.argv[6])
    vector3 = int(sys.argv[7])

    x = point1 + (result * vector1)
    y = point2 + (result * vector2)
    z = point3 + (result * vector3)

    print ("({0:.3f},".format(x),"{0:.3f},".format(y),"{0:.3f})".format(z))

def sphere(argv):
    point1 = int(sys.argv[2])
    point2 = int(sys.argv[3])
    point3 = int(sys.argv[4])
    vector1 = int(sys.argv[5])
    vector2 = int(sys.argv[6])
    vector3 = int(sys.argv[7])
    radius = int(sys.argv[8])

    

    a = (vector1 * vector1) + (vector2 * vector2) + (vector3 * vector3)
    b = 2*((point1 * vector1) + (point2 * vector2) + (point3 * vector3))
    c = ((point1 * point1) + (point2 * point2) + (point3 * point3)-(radius * radius))

    delta = (b*b) + (-4*a*c)

    if (radius > 0):

        print("Sphere of radius", radius)
        print("Line passing through the point ",(point1, point2, point3), "and parallel to the vector",(vector1,vector2,vector3))

        if (delta == 0):
            result = -1*(b/(2*a))
            print ("1 intersection point:")
            find_coordenates(result, argv)
        elif (delta > 0):
            print ("2 intersection points:")
            base = 2*a
            result_positive = (-1*b+(math.sqrt(delta)))/base
            result_negative = (-1*b-(math.sqrt(delta)))/base
            find_coordenates(result_negative, argv)
            find_coordenates(result_positive, argv)
            exit(0)

        elif (a == 0):
            result = (-c)/b
            find_coordenates(result)
        else:
            print("No intersection points.")
            exit(0)
    else:
        exit(84)
    