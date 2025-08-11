#calculates the reflection along a degree
import math

def reflection(result, d2):
    print("Reflection over an axis with an inclination angle of", d2,"degree angle")
    d2 = math.radians(d2)
    reflectionx = (math.cos(2*d2) * result[0]) + (math.sin(2*d2)* result[1])
    reflectiony = (math.sin(2*d2) * result[0]) - (math.cos(2*d2)* result[1])
    return reflectionx, reflectiony

def reflection_mat(result_mat, d2):
    d2 = math.radians(d2)
    reflection_matrice = [[math.cos(2*d2), math.sin(2*d2), 0],
                    [math.sin(2*d2), -math.cos(2*d2), 0],
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
        return reflection_matrice
    else:
        for i in range(len(reflection_matrice)):
            for j in range(len(result_mat[0])):
                for k in range(len(result_mat)):
                    result[i][j] += reflection_matrice[i][k] * result_mat[k][j]
        for r in result:  
            return result
