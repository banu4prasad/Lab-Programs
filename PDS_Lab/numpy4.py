import numpy as np
# Create a NumPy array
my_array = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
# Get the number of dimensions (ndim) of the array
num_dimensions = my_array.ndim
# Get the shape of the array
array_shape = my_array.shape
# Get the total number of elements in the array 
array_size = my_array.size
#Get the data type (dtype) of the elements in the array 
data_type = my_array.dtype
# Print the results
print("Original Array:")
print(my_array) 
print("Number of Dimensions (ndim):", num_dimensions) 
print("Shape of the Array:", array_shape)
print("Total Number of Elements (size):", array_size)
print("Data Type (dtype):", data_type)