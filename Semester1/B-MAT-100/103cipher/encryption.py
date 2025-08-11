import sys
from types import resolve_bases

def matrix_dimension (key):
    dimension = len(key)
    i = 0
    while (dimension >= i*i):
        i+=1
    return(i)

def empty_key_matrix (key, dimension):
    x = []
    for i in range(dimension):
        x.append([])
        for j in range(dimension):
            x[i].append(0)
    return(x)

def empty_sentence_matrix (sentence, dimension):
    result_rows = int(len(sentence)/dimension)
    if (int(len(sentence)%dimension) != '0'):
        result_rows+=1
    x = []
    for i in range(result_rows):
        x.append([])
        for j in range(dimension):
            x[i].append(0)
    return(x)

def matrix_for_c (row, column):
    x= []
    for i in range(row):
        x.append([])
        for j in range(column):
            x[i].append(0)
    return(x)

def list_to_matrix_converter (result, list1):
    i=0
    x = 0
    j=0

    while (i < (len(result))):
        j=0
        if (x < len(list1)):
            while (j < (len(result[i]))):
                if x < len(list1):
                    result[i][j] = list1[x]
                x+=1
                j+=1
        i+=1
    return(result)

def multiply_matrix(A, B):
    rowsA = len(A)
    colsA = len(A[0])
    rowsB = len(B)
    colsB = len(B[0])
    print("Soy A",A)
    print("Soy B",B)

    C = matrix_for_c(rowsA, colsB)
    print("Soy C",C)
     
    for i in range(rowsA):
        for j in range(colsB):
            total = 0
            for ii in range(colsA):
                total += A[i][ii] * B[ii][j]
            C[i][j] = total

    return (C)