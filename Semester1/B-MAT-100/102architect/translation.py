# calculates the Translation along vector given

def translation(result, x1, y1):
    x = (result[0], x1)
    y = (result[1], y1)

    resultx = sum(x)
    resulty = sum(y)
    print("Translation along vector",(x1, y1))
    return (resultx, resulty)
    
def translation_mat(result_mat, i, j):
    trans_matrice = [[1, 0, i],
                    [0, 1, j],
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
        return trans_matrice
    else:
        for i in range(len(trans_matrice)):
            for j in range(len(result_mat[0])):
                for k in range(len(result_mat)):
                    result[i][j] += trans_matrice[i][k] * result_mat[k][j]
        for r in result:  
            return result
