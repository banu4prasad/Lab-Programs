import pandas as pd
# Create a sample DataFrame 
data = {
'Name': ['Alice', 'Bob', 'Charlie', 'David'], 'Age': [25, 30, 22, 35], 'Salary': [50000, 60000, 45000, 70000]
} 
df = pd.DataFrame(data)
# Get the 2 largest values from the 'Salary' column 
n_largest = df['Salary'].nlargest (2) 
print("2 Largest Salaries:") 
print(n_largest)
# Get the 2 smallest values from the 'Age' column 
n_smallest = df['Age'].nsmallest(2) 
print("\n2 Smallest Ages:") 
print(n_smallest)