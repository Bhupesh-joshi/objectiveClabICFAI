#include <iostream>

using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    int lastDigit = -1;
    int secondLastEvenDigit = -1;
    bool foundEven = false;

    while (num > 0) {
        int digit = num % 10;

        if (digit % 2 == 0) {
            if (foundEven) {
                secondLastEvenDigit = digit;
                break;
            } else {
                foundEven = true;
            }
        }

        lastDigit = digit;
        num /= 10;
    }

    if (secondLastEvenDigit != -1) {
        cout << "Digit before the last even digit: " << lastDigit << endl;
    } else {
        cout << "There is no digit before the last even digit or no even digit found." << endl;
    }

    return 0;
}
