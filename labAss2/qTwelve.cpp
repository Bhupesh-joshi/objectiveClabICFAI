#include <iostream>

using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    int lastEvenDigit = -1;

    while (num > 0 && lastEvenDigit == -1) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            lastEvenDigit = digit;
        }
        num /= 10;
    }

    if (lastEvenDigit != -1) {
        cout << "Last even digit: " << lastEvenDigit << endl;
    } else {
        cout << "There are no even digits in the number." << endl;
    }

    return 0;
}
