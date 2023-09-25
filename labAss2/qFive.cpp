#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Initialize a variable to store the sum
    int sum = 0;

    // Ensure the number is positive (work with its absolute value)
    number = abs(number);

    while (number > 0) {
        // Extract the last digit of the number
        int digit = number % 10;

        // Add the digit to the sum
        sum += digit;

        // Remove the last digit from the number
        number /= 10;
    }

    // Print the sum of digits
    cout << "The sum of all digits is: " << sum << std::endl;

    return 0;
}