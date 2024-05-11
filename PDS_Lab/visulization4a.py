import pandas as pd
# Load the Titanic dataset from a CSV file 
titanic_data = pd.read_csv('titanic.csv')
# Display the first 5 rows of the dataset 
print("First 5 rows of the Titanic dataset:") 
print(titanic_data.head())
# Get basic statistics of the dataset
summary_stats = titanic_data.describe() 
print("\nSummary Statistics:") 
print(summary_stats)
# Filter passengers who survived (Survived = 1)
survived_passengers = titanic_data[titanic_data['Survived'] == 1]
print("\nPassengers who survived:") 
print(survived_passengers.head())
# Filter passengers in first class (Pclass = 1)
first_class_passengers = titanic_data[titanic_data['Pclass'] == 1] 
print("\nPassengers in First Class:") 
print(first_class_passengers.head())
# Group passengers by class and calculate the mean age for each class
mean_age_by_class = titanic_data.groupby('Pclass')['Age'].mean() 
print("\nMean Age by Class:") 
print(mean_age_by_class)
# Sort the dataset by age in descending order 
sorted_by_age = titanic_data.sort_values(by='Age', ascending=False) 
print("\nPassengers sorted by Age (Descending):") 
print(sorted_by_age.head())
# Count the number of passengers in each class 
passenger_count_by_class = titanic_data['Pclass'].value_counts() 
print("\nPassenger Count by Class:") 
print(passenger_count_by_class)
# Calculate the correlation between 'Fare' and 'Age' columns 
correlation = titanic_data['Fare'].corr(titanic_data['Age']) 
print("\nCorrelation between Fare and Age:", correlation)