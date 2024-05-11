import numpy as np
# Create matrices and vectors (replace these with your own)
matrix_A = np.array([[1, 2], [3, 4]])
matrix_B = np.array([[5, 6], [7, 8]])
vector_x = np.array([1, 2])
vector_y= np.array([3, 4])
# Dot product of two vectors
dot_product = np.dot(vector_x, vector_y)
# Inner product (dot product) of two matrices
inner_product = np.inner(matrix_A, matrix_B)
# Outer product of two vectors 
outer_product = np.outer(vector_x, vector_y)
# Matrix product (matrix multiplication
matrix_product = np.matmul(matrix_A, matrix_B)
#Matrix exponentiation
exponent = 2 # Replace with the desired exponent
matrix_exponential = np.linalg.matrix_power(matrix_A, exponent)
# Print the results
print("Vector x:", vector_x)
print("Vector y:", vector_y)
print("Matrix A:")
print(matrix_A)
print("Matrix B:")
print(matrix_B)
print("Dot product of x and y:", dot_product)
print("Inner product of A and B:") 
print(inner_product)
print("Outer product of x and y:")
print(outer_product)
print("Matrix product of A and B:")
print(matrix_product) 
print(f"Matrix A raised to the power {exponent}:") 
print(matrix_exponential)