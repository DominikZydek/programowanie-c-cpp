#include <stdio.h>
#include <stdbool.h>

// function for swapping ints
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void generatePermutations(int *array, int start, int end) {
    // when left pointer reaches the end, print the permutation
    if (start == end) {
        for (int i = 0; i <= end; i++) {
            printf("%i ", array[i]);
        }
        printf("\n");
    } else {
        bool seen[10] = {false};

        // see if the permutation was already seen, if not, swap current starting point with i and solve the sub-problem
        // then swap back and mark the permutation as seen
        for (int i = start; i <= end; i++) {
            if (!seen[array[i]]) {
                swap(&array[start], &array[i]);
                generatePermutations(array, start + 1, end);
                swap(&array[start], &array[i]);
                seen[array[i]] = true;
            }
        }
    }
}

int main() {
    int array[] = {1, 1, 9, 0};
    int length = sizeof(array) / sizeof(array[0]);

    printf("All possible permutations:\n");
    generatePermutations(array, 0, length - 1);
}
