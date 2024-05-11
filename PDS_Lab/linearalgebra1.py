import numpy as np
# Input the matrix (replace this with your own matrix)
matrix = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
# Calculate the rank of the matrix 
rank = np.linalg.matrix_rank(matrix)
# Calculate the determinant of the matrix
determinant = np.linalg.det(matrix)
# Calculate the trace of the matrix
# FYI- the trace of the matrix means its the sum of the elements on its main diagonal, which #runs from the top left to the bottom right of the matrix.
trace = np.trace(matrix)
# Print the results
print("Matrix:") 
print(matrix) 
print(f"Rank: {rank}") 
print(f"Determinant: {determinant}")
print(f"Trance:{trace}")
      