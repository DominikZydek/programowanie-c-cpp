#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int word_to_digit(const char *word) {
    if (strcmp(word, "one") == 0) return 1;
    if (strcmp(word, "two") == 0) return 2;
    if (strcmp(word, "three") == 0) return 3;
    if (strcmp(word, "four") == 0) return 4;
    if (strcmp(word, "five") == 0) return 5;
    if (strcmp(word, "six") == 0) return 6;
    if (strcmp(word, "seven") == 0) return 7;
    if (strcmp(word, "eight") == 0) return 8;
    if (strcmp(word, "nine") == 0) return 9;
    return -1;
}


void find_digits(const char *line, int *first_digit, int *last_digit) {
    const char *words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int found_first = 0; //czy pierwsza cyfra została już znaleziona
    char buffer[10]; //przechowywanie słów, które reprezentują cyfry
    int buf_index = 0;

    for (int i = 0; i < strlen(line); i++) {
        if (isalpha(line[i])) { // jeśli znak jest literą
            buffer[buf_index++] = line[i];
            buffer[buf_index] = '\0';
        } else {
            if (buf_index > 0) { // Sprawdzanie czy bufor zawiera słowo reprezentujące cyfrę
                int digit = word_to_digit(buffer);
                if (digit != -1 && !found_first) { //jeśli funkcja zwraca wartość różną od -1
                    *first_digit = digit;
                    found_first = 1;
                }
                *last_digit = digit;
                buf_index = 0;
            }
            if (isdigit(line[i])) { // Sprawdzanie bezpośrednich cyfr
                int digit = line[i] - '0';
                if (!found_first) {
                    *first_digit = digit;
                    found_first = 1;
                }
                *last_digit = digit;
            }
        }
    }
    // Sprawdzanie ostatniego bufora po zakończeniu ciągu
    if (buf_index > 0) {
        int digit = word_to_digit(buffer);
        if (digit != -1) {
            if (!found_first) *first_digit = digit;
            *last_digit = digit;
        }
    }
}


int main() {
    FILE *file = fopen("handbook.txt", "r");
    if (file==NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    int sum = 0;
    char line[100]; // do przechowywania linijek

    //fgets wczytuje linie tekstu z pliku: fgets(gdzie zostaną zapisane wczytane znaki, max liczba znaków do wczytania, plik)

    while (fgets(line, sizeof(line), file)) {
        int first_digit = -1;
        int last_digit = -1;


        find_digits(line, &first_digit, &last_digit);
        if (first_digit != -1 && last_digit != -1) {
            int two_digit_number = first_digit * 10 + last_digit;
            sum += two_digit_number;
            printf("Znaleziona liczba: %d\n", two_digit_number);
        }
    }

    fclose(file);

    printf("Sum: %d\n", sum);

    return 0;
}