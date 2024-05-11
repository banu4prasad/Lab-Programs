import pandas as pd
# Create a sample DataFrame
data = {
'Name': ['Alice', 'Bob', 'Charlie', 'David'],
'Age': [25, 30, 22, 35],
'City': ['New York', 'San Francisco', 'Los Angeles', 'Chicago'] }
df = pd.DataFrame(data)
# Column Selection
selected_columns=df[['Name', 'Age']] 
print("Selected Columns:") 
print(selected_columns)
# Column Addition
df['Salary'] = [50000, 60000, 45000, 70000] 
print("\nDataFrame After Adding 'Salary' Column:") 
print(df)
# Column Deletion
df.drop('City', axis=1, inplace=True) 
# Remove the 'City' column 
print("\nDataFrame After Deleting 'City' Column:")
print (df)