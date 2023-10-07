#include <iostream>
#include <string>

using namespace std;

int main() {
    long long int number; // Input number
    cout << "Enter a number: ";
    cin >> number;

    string numStr = to_string(number); // Convert number to a string
    int lastEvenDigitIndex = -1;

    // Find the index of the last even digit
    for (int i = numStr.length() - 1; i >= 0; i--) {
        if ((numStr[i] - '0') % 2 == 0) {
            lastEvenDigitIndex = i;
            break;
        }
    }

    // Print the digit after the last even digit
    if (lastEvenDigitIndex >= 0 && lastEvenDigitIndex < numStr.length() - 1) {
        char nextDigit = numStr[lastEvenDigitIndex + 1];
        cout << "The digit after the last even digit is: " << nextDigit << endl;
    } else {
        cout << "There is no even digit in the number." << endl;
    }

    return 0;
}
