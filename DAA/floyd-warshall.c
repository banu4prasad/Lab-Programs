#include <stdio.h>
#include <stdlib.h>

// Function to print the matrix
void printMatrix(int **matrix, int nV) {
    for (int i = 0; i < nV; i++) {
        for (int j = 0; j < nV; j++) {
            if (matrix[i][j] == 999)
                printf("%4s", "INF");
            else
                printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to implement Floyd Warshall algorithm
void floydWarshall(int **graph, int nV) {
    int **matrix = (int **)malloc(nV * sizeof(int *));
    for (int i = 0; i < nV; i++)
        matrix[i] = (int *)malloc(nV * sizeof(int));

    for (int i = 0; i < nV; i++)
        for (int j = 0; j < nV; j++)
            matrix[i][j] = graph[i][j];

    for (int k = 0; k < nV; k++) {
        for (int i = 0; i < nV; i++) {
            for (int j = 0; j < nV; j++) {
                if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
            }
        }
    }
    printMatrix(matrix, nV);

    // Free allocated memory
    for (int i = 0; i < nV; i++)
        free(matrix[i]);
    free(matrix);
}

int main() {
    int nV;
    printf("Enter the number of vertices: ");
    scanf("%d", &nV);

    int **graph = (int **)malloc(nV * sizeof(int *));
    for (int i = 0; i < nV; i++)
        graph[i] = (int *)malloc(nV * sizeof(int));

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < nV; i++) {
        for (int j = 0; j < nV; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    floydWarshall(graph, nV);

    // Free allocated memory
    for (int i = 0; i < nV; i++)
        free(graph[i]);
    free(graph);

    return 0;
}
