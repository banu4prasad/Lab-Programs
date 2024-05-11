import numpy as np
# Define the coefficients matrix (A) and the right-hand side vector (b)
#Replace these with your own values
A = np.array([[2,1], [1,3]])
b = np.array([3,9])
#Solve the linear system of equations 
solution = np.linalg.solve(A,b)
# Print the solution 
print("Coefficient matrix (A):")
print(A)
print("Right-hand side vector (b):")
print(b)
print("Solution vector (x):")
print(solution)