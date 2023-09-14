#include <iostream>
#include <cmath>

int main() {
    int number;

    // Input a number
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Check if the number is negative and make it positive
    if (number < 0) {
        number = -number;
    }

    // Find the second last digit
    int secondLastDigit = (number / 10) % 10;

    // Print the second last digit
    std::cout << "The second last digit is: " << secondLastDigit << std::endl;

    return 0;
}