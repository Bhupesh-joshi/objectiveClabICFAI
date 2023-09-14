#include <iostream>
#include <cmath>

int main() {
    int number;

    // Input a number
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Ensure the number is positive or zero
    number = std::abs(number);

    // Calculate the last digit
    int lastDigit = number % 10;

    // Remove the last digit
    number /= 10;

    // Calculate the second last digit
    int secondLastDigit = number % 10;

    // Calculate the sum of the last two digits
    int sum = lastDigit + secondLastDigit;

    // Print the sum
    std::cout << "The sum of the last two digits is: " << sum << std::endl;

    return 0;
}