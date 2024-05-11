import pandas as pd 
import matplotlib.pyplot as plt 
import seaborn as sns
# Load the Titanic dataset from a CSV file 
titanic_data = pd.read_csv('titanic.csv')
# Display the first 5 rows of the dataset 
print("First 5 rows of the Titanic dataset:") 
print(titanic_data.head())
# Get basic statistics of the dataset
summary_stats = titanic_data.describe
print("\nSummary Statistics:")
print(summary_stats)
# Plot a histogram of passengers' ages 
plt.figure(figsize=(8, 6))
sns.histplot(titanic_data['Age'], bins=20, kde=True)
plt.title("Age Distribution of Passengers") 
plt.xlabel("Age")
plt.ylabel("Frequency")
plt.show()
# Plot a bar chart for passenger class counts
plt.figure(figsize=(8, 6)) 
sns.countplot(data=titanic_data, x='Pclass')
plt.title("Passenger Class Counts")
plt.xlabel("Class")
plt.ylabel("Count")
plt.show()
# Create a heatmap to visualize the correlation between numerical columns 
plt.figure(figsize=(8, 6))
correlation_matrix = titanic_data.corr()
sns.heatmap(correlation_matrix, annot=True, cmap='coolwarm')
plt.title("Correlation Heatmap")
plt.show()