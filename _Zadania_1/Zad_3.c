#include <stdio.h>

int calculateFactorial(int num) {

    if (num < 0) {
        return -1;
    }

    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * calculateFactorial(num - 1);
    }
}

void printFactorials(int array []) {

    for (int i = 0; i < 10; i++) {
        printf("%i\n", calculateFactorial(array[i]));
    }
}

int main() {

    int array [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printFactorials(array);

    return 0;
}
