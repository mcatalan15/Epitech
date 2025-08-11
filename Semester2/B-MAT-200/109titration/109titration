#!/usr/bin/env python3

import csv
from sys import argv, stderr
import numpy as np

def manage_error():
    if len(argv) != 2:
        exit(84)

def check_error(number):
    a = 0
    b = 0
    d = 0
    c = 0
    for i in range(0, len(number) - 1):
        for j in range(0, len(number[i]) - 1):
            if number[i][j] == '.':
                a =+ 1
            elif number[i][j] == '\n':
                d =+ 1
            elif number[i][j] >= '0' and number[i][j] <= '9':
                c += 1
            elif number[i][j] == ';':
                b =+ 1
            else:
                exit(84)
        if a > 2 or b != 1:
            exit(84)
        else:
            a = 0
            b = 0

def my_help():
    if len(argv) == 2:
        if argv[1] == "-h":
            print("USAGE\n" "    " + argv[0] + ' file\n\n' 'DESCRIPTION\n'
                  '    file    a csv file containing "vol;ph" lines')
            exit(0)

def calcul_derivative(v, v1, v2, ph, ph1, ph2):
    gauche = (ph - ph1) / (v - v1)
    droite = (ph2 - ph) / (v2 - v)
    derivative = (gauche * ((v2 - v) / (v2 - v1))) + (droite * ((v - v1) / (v2 - v1)))
    return derivative

def calcul_estimated(x, xa, xb, ya, yb):
    estimation = ya + (x - xa) * (yb - ya) / (xb - xa)
    return estimation

def titration():
    j = 1
    w = 1
    y = 0
    y2 = 0
    tampon = 0
    v_equival = 0
    v_equival2 = 0
    nbr = []
    try:
        file = open(argv[1], "rt")
        number = [value.rstrip('\n') for value in file]
    except OSError as ex:
        exit(84)
    try:
        nbr = [[float(x) for x in value.split(';')] for value in number]
    except ValueError as ex:
        exit(84)
    for duo in enumerate(nbr):
        if len(duo) != 2:
            exit(84)
    if len(nbr) < 5:
        exit(84)
    print("Derivative:")
    while j != len(nbr) - 1:
        deriv = calcul_derivative(float(nbr[j][0]), float(nbr[j - 1][0]), float(nbr[j + 1][0]), float(nbr[j][1]), float(nbr[j - 1][1]), float(nbr[j + 1][1]))
        print("%.1f ml -> %.2f" % (float(nbr[j][0]), deriv))
        nbr[j - 1][0] = nbr[j][0]
        nbr[j - 1][1] = deriv
        j = j + 1
        if tampon < deriv:
            tampon = deriv
            v_equival = nbr[j - 1][0]
            y = j - 3
    print("\nEquivalence point at %.1f ml"% float(v_equival))
    print("\nSecond derivative:")
    while w != len(nbr) - 3:
        second_deriv = calcul_derivative(float(nbr[w][0]), float(nbr[w - 1][0]), float(nbr[w + 1][0]), float(nbr[w][1]), float(nbr[w - 1][1]), float(nbr[w + 1][1]))
        print("%.1f ml -> %.2f" % (float(nbr[w][0]), second_deriv))
        nbr[w - 1][0] = nbr[w][0]
        nbr[w - 1][1] = second_deriv
        w = w + 1
    print("\nSecond derivative estimated:")
    ph_vol = float(nbr[y - 1][0])
    ph_vol1 = float(nbr[y - 1][1])
    ph_vol2 = float(nbr[y][0])
    ph_vol3 = float(nbr[y][1])
    ph_vol4 = float(nbr[y + 1][0])
    ph_vol5 = float(nbr[y + 1][1])
    print("%.1f ml -> %.2f" % ((ph_vol, ph_vol1)))
    tampon2 = ph_vol1
    for z in np.arange(float(ph_vol) + 0.1, float(ph_vol4) - 0.1, 0.1):
        if z < ph_vol2:
            nbr_max = calcul_estimated(z, float(ph_vol), float(ph_vol2), float(ph_vol1), float(ph_vol3))
        if z > ph_vol2:
            nbr_max = calcul_estimated(z, float(ph_vol2), float(ph_vol4), float(ph_vol3), float(ph_vol5))
        if z == ph_vol2:
            print("%.1f ml -> %.2f" % ((z, ph_vol2)))
        else:
            print("%.1f ml -> %.2f" % ((z, nbr_max)))
        if abs(tampon2) > abs(ph_vol2):
            tampon2 = ph_vol2
            v_equival2 = z
        if abs(tampon2) > abs(nbr_max):
            tampon2 = nbr_max
            v_equival2 = z
    print("%.1f ml -> %.2f" % ((ph_vol4, ph_vol5)))
    print("\nEquivalence point at %.1f ml"% float(v_equival2))

if __name__=='__main__':
    my_help()
    manage_error()
    titration()