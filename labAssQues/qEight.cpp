#include <iostream>

int main() {
    int number;

    // Input a number
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Calculate the last digit
    int lastDigit = number % 10;

    // Double the last digit
    int doubledLastDigit = lastDigit * 2;

    // Calculate the result with the doubled last digit
    int result = (number / 10) * 10 + doubledLastDigit;

    // Print the result
    std::cout << "The number with the last digit doubled is: " << result << std::endl;

    return 0;
}