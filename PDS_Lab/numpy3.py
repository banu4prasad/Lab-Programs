import numpy as np
# Create an array of numbers
my_array = np.array([10, 5, 8, 2, 7, 1, 9])
# Find the minimum value in the array 
min_value = np.min(my_array)
# Find the maximum value in the array 
max_value = np.max(my_array)
# Find the sum of all elements in the array 
array_sum = np.sum(my_array)
#Calculate the cumulative sum of the array 
cumulative_sum = np.cumsum(my_array)
# Print the results
print("Original Array:", my_array) 
print("Minimum Value:", min_value) 
print("Maximum Value:", max_value) 
print("Sum of Array:", array_sum)
print("Cumulative Sum of Array:", cumulative_sum)