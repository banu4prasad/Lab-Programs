import pandas as pd
# Create a sample DataFrame
data = {
'Name': ['Alice', 'Bob', 'Charlie', 'David', 'Eve'],
'Age': [25, 30, 35, 40, 22],
'City': ['New York', 'San Francisco', 'Los Angeles', 'Chicago', 'Miami']}
df = pd.DataFrame(data)
# Use describe() to get summary statistics 
print("DataFrame Statistics (describe()):")
print(df.describe())
# Use head() to display the first few rows (default is 5)
print("\nFirst 3 rows (head()):") 
print(df.head(3))
# Use tail() to display the last few rows (default is 5)
print("\nLast 2 rows (tail()):") 
print(df.tail(2))