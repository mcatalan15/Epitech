#Makes a vector
import numpy as np

def vector(x,y,z):
    vector = np.array([x,y,z])
    vector = vector.astype(np.float)
    return vector