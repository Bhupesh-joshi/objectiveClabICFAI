#include <iostream>

using namespace std;

int main() {
    long long int number; // Input number
    cout << "Enter a number: ";
    cin >> number;

    int lastEvenDigit = -1; // Initialize to -1 if no even digits are found
    int secondLastEvenDigit = -1; // Initialize to -1 if only one even digit is found

    while (number > 0) {
        int digit = number % 10; // Get the last digit
        lastEvenDigit = (1 - (digit % 2)) * digit + (digit % 2) * lastEvenDigit;
        secondLastEvenDigit = (1 - (digit % 2)) * secondLastEvenDigit + (digit % 2) * lastEvenDigit;
        number /= 10; // Remove the last digit
    }

    // Print the second last even digit
    cout << "The second last even digit is: " << secondLastEvenDigit << endl;

    return 0;
}
