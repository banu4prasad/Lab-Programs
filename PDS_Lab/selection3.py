import pandas as pd
# Create a sample DataFrame
data = {
'Name': ['Alice', 'Bob', 'Charlie', 'David'],
'Age': [25, 30, 22, 35],
'City': ['New York', 'San Francisco', 'Los Angeles', 'Chicago']
} 
df = pd.DataFrame(data)
# Row Selection 
selected_row = df.loc[1]
# Selects the second row (index 1)
print("Selected Row:")
print(selected_row)
# Row Addition
new_row = pd.Series(['Eva', 28, 'Miami'], index=['Name', 'Age', 'City']) 
df = df.append(new_row, ignore_index=True) 
# Adds a new row to the DataFrame
print("\nDataFrame After Adding New Row:") 
print(df)
# Row Deletion
df.drop(2, inplace=True) # Removes the third row (index 2) 
print("\nDataFrame After Deleting Third Row:") 
print(df)