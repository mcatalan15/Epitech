#!/usr/bin/env python3

import sys
import math
from utils_matrix import *
from calculus import *
from functions import *

def check_param():
    if len(sys.argv) <= 2:
        print("Not enough arguments.\nUsage: ./108trigo fun a0 a1 a2 ...")
        exit(84)
    if sys.argv[1] not in ["EXP", "COS", "SIN", "COSH", "SINH"]:
        print("[%s] is not a valid argument.\nUsage: ./108trigo fun a0 a1 a2 ..." % (sys.argv[1]))
        exit(84)
    try:
        for i in range(2, len(sys.argv)):
            sys.argv[i] = float(sys.argv[i])
    except:
        print("Argument: %d -> (%s) is not a number" % (i, sys.argv[i]))
        exit(84)

def error_management():
    i = len(sys.argv) - 2
    arg = math.trunc(math.sqrt(i))
    if math.trunc(math.sqrt(i)) ** 2 != i:
        print("Missing arguments.\nUsage: ./108trigo fun a0 a1 a2 ...")
        exit(84)
    return arg

def print_matrix(matrix):
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            print("%.2f%c" % (matrix[i][j], '\t' if (j != len(matrix[i]) - 1) else '\n'), end='')

def run_calcul(matrix):
    args = ["EXP", "COS", "SIN", "COSH", "SINH"]
    fct_tab = [my_exp, my_cos, my_sin, cosh, sinh]
    for i in range(len(fct_tab)):
        if sys.argv[1] == args[i]:
            matrix = fct_tab[i](matrix)
    print_matrix(matrix)

def man_help():
    print("USAGE\n"
    "    ./108trigo fun a0 a1 a2 ...\n"
    "\n"
    "DESCRIPTION\n"
    "    fun     function to be applied, among at least “EXP”, “COS”, “SIN”, “COSH”\n"
    "            and “SINH“\n"
    "    ai      coeficients of the matrix")
    exit(0)
