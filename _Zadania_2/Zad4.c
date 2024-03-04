#include <stdio.h>

typedef struct {
    char *name;
    float finalGrade;
} Student;

void sort(Student *students[], int length) {
    int isSwapped;

    for (int i = 0; i < length - 1; i++) {
        isSwapped = 0;
        for (int j = 0; j < length - i - 1; j++) {
            if (students[j] -> finalGrade < students[j + 1] -> finalGrade) {
                Student *temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
                isSwapped = 1;
            }
        }
        if (!isSwapped) {
            break;
        }
    }
}

void printStudents(Student *students[], int length) {
    for (int i = 0; i < length; i++) {
        printf("Student %i - name: %s, finalGrade: %f\n", i, students[i] -> name, students[i] -> finalGrade);
    }
}

int main() {
    Student students[5] = {
            {"Anna", 4.0},
            {"Jakub", 3.2},
            {"Monika", 4.7},
            {"Adam", 3.4},
            {"Pawel", 4.0}
    };

    int length = sizeof(students) / sizeof(students[0]);

    // creating an array of pointers
    Student *p_students[length];
    for (int i = 0; i < length; i++) {
        p_students[i] = &students[i];
    }

    // passing the array of pointers
    sort(p_students, length);
    printStudents(p_students, length);

    return 0;
}
