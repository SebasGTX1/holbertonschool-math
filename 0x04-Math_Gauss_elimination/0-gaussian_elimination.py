#!/usr/bin/env python3
import numpy as np


def gaussian_elimination(A, b):
    if np.linalg.det(A) is False:
        print("You can't divide by zero!")
        return None
    return np.linalg.solve(A, b)
