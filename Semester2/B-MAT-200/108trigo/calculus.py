#!/usr/bin/env python3

import sys
import math
from utils_matrix import *

def identity_matrix(n):
    matrix_tmp = []
    for i in range(n):
        line = []
        for j in range(n):
            line.append(1 if j == i else 0)
        matrix_tmp.append(line)
    return matrix_tmp

def multiplicat_matrix(matrix_1, matrix_2):
    matrix_tmp = []
    for i in range(len(matrix_1)):
        line = []
        for j in range(len(matrix_2[0])):
            a = 0
            for k in range(len(matrix_1[0])):
                a += matrix_1[i][k] * matrix_2[k][j]
            line.append(a)
        matrix_tmp.append(line)
    return matrix_tmp

def divide_matrix(matrix, n):
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            matrix[i][j] /= n
    return matrix

def substract_matrix(matrix_1, matrix_2):
    matrix_tmp = []
    for i in range(len(matrix_1)):
        line = []
        for j in range(len(matrix_1[0])):
            line.append(matrix_1[i][j] - matrix_2[i][j])
        matrix_tmp.append(line)
    return matrix_tmp

def add_matrix(matrix_1, matrix_2):
    matrix_tmp = []
    for i in range(len(matrix_1)):
        line = []
        for j in range(len(matrix_1[0])):
            line.append(matrix_1[i][j] + matrix_2[i][j])
        matrix_tmp.append(line)
    return matrix_tmp

def power_matrix(matrix, n):
    matrix_tmp = matrix
    for i in range(n - 1):
        matrix_tmp = multiplicat_matrix(matrix_tmp, matrix)
    return matrix_tmp
