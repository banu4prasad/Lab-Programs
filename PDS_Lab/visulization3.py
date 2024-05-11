import pandas as pd
# Create sample DataFrames
data1 = {
'ID': [1, 2, 3, 4],
'Name': ['Alice', 'Bob', 'Charlie', 'David']
}
data2 = {
'ID': [3, 4, 5, 6], 
'Age': [25, 30, 22, 35] }
df1 = pd.DataFrame(data1)
df2 = pd.DataFrame(data2)
# Merging DataFrames
merged_df = pd.merge(df1, df2, on='ID', how='inner')
print("Merged DataFrame (Inner Join):") 
print(merged_df)
# Joining DataFrames
joined_df = df1.set_index('ID').join(df2.set_index('ID'), how='outer')
print("\nJoined DataFrame (Outer Join):") 
print(joined_df)
# Concatenating DataFrames
concatenated_df = pd.concat([df1, df2], axis=0, ignore_index=True) 
print("\nConcatenated DataFrame:")
print(concatenated_df)