#include <iostream>
#include <string>
#include <sstream>

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Convert the integer to a string
    std::string numberStr = std::to_string(number);

    // Initialize variables for the sum and the current number
    int sum = 0;
    int currentNumber = 0;

    // Use a stringstream to convert substrings to integers
    std::istringstream iss;

    // Iterate through the string
    for (size_t i = 0; i < numberStr.size(); ++i) {
        // Add the current digit to the currentNumber
        currentNumber = currentNumber * 10 + (numberStr[i] - '0');

        // If we've encountered a consecutive pair of digits, add it to the sum
        if (i < numberStr.size() - 1) {
            sum += currentNumber;
            currentNumber = 0; // Reset currentNumber
        }
    }

    // Add the last number (if it's a single digit)
    sum += currentNumber;

    // Print the sum of numbers formed by consecutive digits
    std::cout << "The sum of numbers formed by consecutive digits is: " << sum << std::endl;

    return 0;
}
