#include <iostream>
#include <string>

using namespace std;

int main() {
    long long int number; // Input number
    cout << "Enter a number: ";
    cin >> number;

    string numStr = to_string(number); // Convert number to a string
    int sum = 0;

    for (int i = 0; i < numStr.length(); i++) {
        int currentDigit = numStr[i] - '0';

        // Check if there is a next digit to form a consecutive number
        if (i < numStr.length() - 1) {
            int nextDigit = numStr[i + 1] - '0';
            int consecutiveNumber = currentDigit * 10 + nextDigit;
            sum += consecutiveNumber;
        }
    }

    cout << "The sum of numbers formed by consecutive digits is: " << sum << endl;

    return 0;
}
