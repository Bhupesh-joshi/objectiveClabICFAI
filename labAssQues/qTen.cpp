#include <iostream>

int main() {
    int number;

    // Input a number
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Extract the last digit
    int lastDigit = number % 10;
    number /= 10;

    // Extract the second last digit
    int secondLastDigit = number % 10;
    number /= 10;

    // Create the exchanged number
    int exchangedNumber = number * 100 + lastDigit + secondLastDigit * 10;

    // Print the number with the last two digits exchanged
    std::cout << "The number with the last two digits exchanged is: " << exchangedNumber << std::endl;

    return 0;
}