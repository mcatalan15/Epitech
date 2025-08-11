#Detects if the vector will intersect anytime

def intersection(i_vector, vectort, t, bat):
    vectort_0 = vectort - i_vector
    if (vectort[2] > 0 and vectort_0[2] < 0) or (vectort[2] < 0 and vectort_0[2] > 0):
        print("The incidence angle is:")
        return "True"
    else:
        print("The ball won't reach the paddle.")
    return "False"