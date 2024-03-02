#include <stdio.h>

int main() {
    int grades [2][5] = {{3, 5, 2, 4, 3},
                         {1, 3, 5, 2, 3}};

    int sum = 0;
    float avg;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            sum += grades[i][j];
        }
        avg = sum / 5;
        printf("Average of grades in row %i: %.2f\n", i + 1, avg);
        sum = 0;
    }

    return 0;
}

