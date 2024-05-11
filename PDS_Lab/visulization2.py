import pandas as pd
# Create a sample DataFrame 
data = {
'Category': ['A', 'B', 'A', 'B', 'A', 'C'], 'Values': [10, 25, 18, 32, 15, 8]
}
df = pd.DataFrame(data)
# Group the DataFrame by the 'Category' column 
grouped = df.groupby('Category')
# Calculate the sum of 'Values' for each group 
sum_by_category=grouped['Values'].sum() 
print("Sum of Values by Category:") 
print(sum_by_category)
#Calculate the mean of 'Values' for each group 
mean_by_category= grouped['Values'].mean() 
print("\nMean of Values by Category:") 
print(mean_by_category)
# You can also use multiple columns for grouping 
# # For example, grouping by 'Category' and 'Values' 
grouped_multiple = df.groupby(['Category', 'Values'])
# Count the number of occurrences for each combination of 'Category' and 'Values' 
count_by_category_values = grouped_multiple.size() 
print("\nCount by Category and Values:") 
print(count_by_category_values)