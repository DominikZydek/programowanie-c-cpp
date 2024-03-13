#include <stdio.h>

int binarySearch(int *array, int left, int right, int n) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        // if n is exactly in the middle
        if (array[mid] == n) {
            return mid;
        }

        // if n is in the left half
        if (array[mid] > n) {
            return binarySearch(array, left, mid - 1, n);
        }

        // if n is in the right half
        return binarySearch(array, mid + 1, right, n);
    }
    // if n is not in the array
    return -1;
}

int main() {
    int array[] = {1, 7, 9, 11, 34, 78, 90, 105, 778, 1056, 3207, 7610, 9983};
    int length = sizeof(array) / sizeof(array[0]);
    int n = 34;
    int result = binarySearch(array, 0, length - 1, n);

    if (result == -1) {
        printf("Element %i not found.", n);
    } else {
        printf("Element %i found at index %i", n, result);
    }
}
