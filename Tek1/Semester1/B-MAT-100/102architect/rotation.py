# calculates the rotation along a degree
import math

def rotation(result, d1):
    print("Rotation by a", d1,"degree angle")
    d1 = math.radians(d1)
    resultx = (math.cos(d1) * result[0]) - (math.sin(d1)* result[1])
    resulty = (math.sin(d1) * result[0]) + (math.cos(d1)* result[1])
    return resultx, resulty

def rotation_mat(result_mat, d1):
    d1 = math.radians(d1)
    rotation_matrice = [[math.cos(d1), -math.sin(d1), 0],
                    [math.sin(d1), math.cos(d1), 0],
                    [0, 0, 1]]
    result = [[0,0,0],
            [0,0,0],
            [0,0,0]]
    zeros = 0

    for i in range (len(result_mat)):
        for j in range(len(result_mat[i])):
            if result_mat[i][j]==0:
                zeros += 1

    if zeros == 9:
        return rotation_matrice
    else:
        for i in range(len(rotation_matrice)):
            for j in range(len(result_mat[0])):
                for k in range(len(result_mat)):
                    result[i][j] += rotation_matrice[i][k] * result_mat[k][j]
        for r in result:  
            return result
