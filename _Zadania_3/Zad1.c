#include <stdio.h>
#include <stdlib.h>

void printPascalTriangle(int height) {
    // allocate memory for triangle
    int **triangle = (int **)malloc(height * sizeof(int *));

    // allocate memory for each row
    for (int i = 0; i < height; i++) {
        triangle[i] = (int *)malloc((i + 1) * sizeof(int));
    }

    // fill triangle
    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                triangle[i][j] = 1;
            else
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    // print triangle
    for (int i = 0; i < height; i++) {

        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }

        printf("\n");
    }

    // free memory
    for (int i = 0; i < height; i++) {
        free(triangle[i]);
    }
    free(triangle);
}

int main() {
    printPascalTriangle(10);

    return 0;
}