import pandas as pd
# Create a pandas Series with labels 
data = {'A': 10, 'B': 20, 'C': 30, 'D': 40} 
my_series = pd.Series(data)
# Print the Series 
print("Pandas Series:") 
print(my_series)
# Accessing elements by label 
print("\nAccessing elements by label:") 
print("Value at label 'A':", my_series['A']) 
print("Value at label 'C':", my_series['C'])
# Accessing elements by position 
print("\nAccessing elements by position:")
print("The first element:", my_series[0]) 
print("The second element:", my_series[1])
# Arithmetic operations on the Series
print("\nArithmetic operations on the Series:") 
result = my_series*2 
print("Series multiplied by 2:")
print(result)
# Filtering elements 
print("\nFiltering elements:") 
filtered_series = my_series[my_series> 20]
print("Elements greater than 20:") 
print(filtered_series)