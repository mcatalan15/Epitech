#Gets the angle of the vector when it collides

import numpy as np

def arcsin(vectort_0, vectort_module, bat):
    z = vectort_0[2] - bat[2]
    result = np.arcsin(z/-vectort_module)
    result = 180 * result / np.pi
    result = format("%.2f" % result)
    return result