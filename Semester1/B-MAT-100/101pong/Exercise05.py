#Gets the vector velocity

def position(i_vector, vectort, t):
    velocity = vectort - i_vector
    result = velocity * t + vectort
    return result