import numpy as np
# Input the matrix (replace this with your own matrix) 
matrix = np.array([[1, 2], [2, 3]])
# Calculate the eigenvalues of the matrix
eigenvalues = np.linalg.eigvals(matrix)
# Print the eigenvalues
print("Matrix:")
print(matrix)
print("Eigenvalues:")
print(eigenvalues)