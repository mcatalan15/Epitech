# calculates the scaling along vector given

def scaling(result, x2, y2):
    resultx = result[0] * x2
    resulty = result[1] * y2
    print("Scaling by factors",x2,"and",y2)
    return resultx, resulty

def scaling_mat(result_mat, num1, num2):
    scaling_matrice = [[num1, 0, 0],
                    [0, num2, 0],
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
        return scaling_matrice
    else:
        for i in range(len(scaling_matrice)):
            for j in range(len(result_mat[0])):
                for k in range(len(result_mat)):
                    result[i][j] += scaling_matrice[i][k] * result_mat[k][j]
        for r in result:  
            return result
