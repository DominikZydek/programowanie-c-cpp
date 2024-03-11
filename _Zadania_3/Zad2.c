#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function to allocate memory for a matrix
int **allocateMatrix(int rows, int cols) {
    int **matrix = (int **)malloc(rows * sizeof(int *));

    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    return matrix;
}

// function to free memory allocated for a matrix
void freeMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++)
        free(matrix[i]);
    free(matrix);
}

// function to fill a matrix with random numbers
void fillMatrix(int **matrix, int rows, int cols) {
    srand(time(NULL));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100; // 0 - 99
        }
    }
}

// function to print a matrix
void printMatrix(int **matrix, int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 4;
    int cols = 6;

    int **matrix = allocateMatrix(rows, cols);
    fillMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    freeMatrix(matrix, rows);

    return 0;
}
