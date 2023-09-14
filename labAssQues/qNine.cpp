#include <iostream>

int main() {
    int number;

    // Input a number
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Ensure the number is positive or zero
    number = std::abs(number);

    // Calculate the number without the second last digit
    int numWithoutSecondLastDigit = (number / 100) * 10 + (number % 10);

    // Print the number without the second last digit
    std::cout << "The number without the second last digit is: " << numWithoutSecondLastDigit << std::endl;

    return 0;
}