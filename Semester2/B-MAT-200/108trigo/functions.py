#!/usr/bin/env python3

import sys
import math
from utils_matrix import *
from calculus import *

def my_exp(matrix):
    matrix_tmp = identity_matrix(len(matrix))
    for i in range(1, 50):
        matrix_tmp = add_matrix(matrix_tmp, divide_matrix(power_matrix(matrix, i), math.factorial(i)))
    return matrix_tmp

def my_cos(matrix):
    matrix_tmp = identity_matrix(len(matrix))
    for i in range(1, 40):
        if i % 2 == 0:
            matrix_tmp = add_matrix(matrix_tmp, divide_matrix(power_matrix(matrix, 2 * i), math.factorial(2 * i)))
        else:
            matrix_tmp = substract_matrix(matrix_tmp, divide_matrix(power_matrix(matrix, 2 * i), math.factorial(2 * i)))
    return matrix_tmp

def my_sin(matrix):
    matrix_tmp = matrix
    for i in range(1, 40):
        if i % 2 == 0:
            matrix_tmp = add_matrix(matrix_tmp, divide_matrix(power_matrix(matrix, 2 * i + 1), math.factorial(2 * i + 1)))
        else:
            matrix_tmp = substract_matrix(matrix_tmp, divide_matrix(power_matrix(matrix, 2 * i + 1), math.factorial(2 * i + 1)))
    return matrix_tmp

def cosh(matrix):
    matrix_tmp = identity_matrix(len(matrix))
    for i in range(1, 40):
        matrix_tmp = add_matrix(matrix_tmp, divide_matrix(power_matrix(matrix, 2 * i), math.factorial(2 * i)))
    return matrix_tmp

def sinh(matrix):
    matrix_tmp = matrix
    for i in range(1, 40):
        matrix_tmp = add_matrix(matrix_tmp, divide_matrix(power_matrix(matrix, 2 * i + 1), math.factorial(2 * i + 1)))
    return matrix_tmp
