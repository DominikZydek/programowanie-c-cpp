#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int word_to_digit(const string &word) {
    if (word == "one") return 1;
    if (word == "two") return 2;
    if (word == "three") return 3;
    if (word == "four") return 4;
    if (word == "five") return 5;
    if (word == "six") return 6;
    if (word == "seven") return 7;
    if (word == "eight") return 8;
    if (word == "nine") return 9;
    return -1;
}

void find_digits(const string &line, int &first_digit, int &last_digit) {
    const string words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    bool found_first = false; // czy pierwsza cyfra została już znaleziona
    string buffer; // przechowywanie słów, które reprezentują cyfry

    for (char c : line) {
        if (isalpha(c)) { // jeśli znak jest literą
            buffer += c;
        } else {
            if (!buffer.empty()) { // Sprawdzanie czy bufor zawiera słowo reprezentujące cyfrę
                int digit = word_to_digit(buffer);
                if (digit != -1 && !found_first) { // jeśli funkcja zwraca wartość różną od -1
                    first_digit = digit;
                    found_first = true;
                }
                last_digit = digit;
                buffer.clear();
            }
            if (isdigit(c)) { // Sprawdzanie bezpośrednich cyfr
                int digit = c - '0';
                if (!found_first) {
                    first_digit = digit;
                    found_first = true;
                }
                last_digit = digit;
            }
        }
    }
    // Sprawdzanie ostatniego bufora po zakończeniu ciągu
    if (!buffer.empty()) {
        int digit = word_to_digit(buffer);
        if (digit != -1) {
            if (!found_first) first_digit = digit;
            last_digit = digit;
        }
    }
}

int main() {
    ifstream file("handbook.txt");
    if (!file.is_open()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    int sum = 0;
    string line;

    while (getline(file, line)) {
        int first_digit = -1;
        int last_digit = -1;

        find_digits(line, first_digit, last_digit);
        if (first_digit != -1 && last_digit != -1) {
            int two_digit_number = first_digit * 10 + last_digit;
            sum += two_digit_number;
            cout << "Znaleziona liczba: " << two_digit_number << endl;
        }
    }

    file.close();

    cout << "Sum: " << sum << endl;

    return 0;
}

