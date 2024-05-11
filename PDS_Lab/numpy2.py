import numpy as np
# Create a sample NumPy array
arr = np.array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
# Slicing: Select a range of elements
slice_result = arr[2:7] # Elements from index 2 to 6 (7 is exclusive)
print("Slicing result:", slice_result)
# Integer array indexing: Select specific elements by their indices 
indexing_result = arr[[1, 3, 5]] 
# Elements at indices 1, 3, and 5 
print("Integer array indexing result:", indexing_result)
#Boolean array indexing: Select elements based on a Boolean condition
boolean_condition = arr % 2 == 0 
# Create a Boolean array indicating even numbers 
boolean_indexing_result = arr[boolean_condition]
print("Boolean array indexing result:", boolean_indexing_result)