#include <iostream>
#include <string>

using namespace std;

int main() {
    long long int number; // Input number
    cout << "Enter a number: ";
    cin >> number;

    string numStr = to_string(number); // Convert number to a string
    int lastMultipleOf3Digit = -1;

    // Find the index of the last digit that is a multiple of 3
    for (int i = numStr.length() - 1; i >= 0; i--) {
        int digit = numStr[i] - '0';
        if (digit % 3 == 0) {
            lastMultipleOf3Digit = digit;
            break;
        }
    }

    // Print the last digit that is a multiple of 3
    if (lastMultipleOf3Digit != -1) {
        cout << "The last digit that is a multiple of 3 is: " << lastMultipleOf3Digit << endl;
    } else {
        cout << "There is no digit that is a multiple of 3 in the number." << endl;
    }

    return 0;
}
