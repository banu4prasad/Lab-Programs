import numpy as np
# Create a NumPy array from a list with float type
my_list = [1.0, 2.5, 3.7, 4.2]
array_from_list = np.array(my_list, dtype=float)
# Create a NumPy array from a tuple with float type
my_tuple=(1.0, 2.5, 3.7, 4.2) 
array_from_tuple = np.array(my_tuple, dtype=float)
print("Array from list:", array_from_list) 
print("Array from tuple:", array_from_tuple)