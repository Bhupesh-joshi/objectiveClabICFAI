#include <iostream>
#include <string>

using namespace std;

int main() {
    long long int number; // Input number
    cout << "Enter a number: ";
    cin >> number;

    string numStr = to_string(number); // Convert number to a string
    int lastOddDigitIndex = -1;

    // Find the index of the last odd digit
    for (int i = numStr.length() - 1; i >= 0; i--) {
        int digit = numStr[i] - '0';
        if (digit % 2 != 0) {
            lastOddDigitIndex = i;
            break;
        }
    }

    // If a last odd digit is found, extract and calculate half of the remaining portion
    if (lastOddDigitIndex != -1 && lastOddDigitIndex < numStr.length() - 1) {
        string portionAfterLastOdd = numStr.substr(lastOddDigitIndex + 1);
        long long int half = stoll(portionAfterLastOdd) / 2;
        cout << "Half of the number after the last odd digit is: " << half << endl;
    } else {
        cout << "There is no odd digit in the number or no digits after the last odd digit." << endl;
    }

    return 0;
}
