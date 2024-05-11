import pandas as pd
# Create a dictionary of data 
data = {
'Name': ['Alice', 'Bob', 'Charlie', 'David'],
'Age': [25, 30, 35, 40], 'City': ['New York', 'San Francisco', 'Los Angeles', 'Chicago'] }
# Create a Pandas DataFrame from the dictionary
df = pd.DataFrame(data)
# Print the DataFrame 
print(df)