import pandas as pd
import numpy as np
# Create a sample DataFrame 
data = {'A': [1, 2, 3, 4], 'B': [5, 6, 7, 8]} 
df = pd.DataFrame(data)
# Convert DataFrame to NumPy array using .values attribute 
numpy_array_df = df.values
# Create a sample Series 
series = pd.Series([10, 20, 30, 40])
# Convert Series to NumPy array using values attribute
numpy_array_series = series.values
# Alternatively, you can use the to_numpy() method 
numpy_array_df_alt = df.to_numpy() 
numpy_array_series_alt = series.to_numpy()
# Print the NumPy arrays 
print("DataFrame to NumPy Array (Using values attribute):")
print(numpy_array_df) 
print("\nSeries to NumPy Array (Using values attribute):") 
print(numpy_array_series) 
print("\nDataFrame to NumPy Array (Using to_numpy() method):")
print(numpy_array_df_alt) 
print("\nSeries to NumPy Array (Using to_numpy() method):")
print(numpy_array_series_alt)