#include <iostream>

int main() {
    double num1, num2;

    // Input two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Find and print the largest number first
    if (num1 > num2) {
        std::cout << "The largest number is: " << num1 << std::endl;
        std::cout << "The second number is: " << num2 << std::endl;
    } else {
        std::cout << "The largest number is: " << num2 << std::endl;
        std::cout << "The first number is: " << num1 << std::endl;
    }

    return 0;
}
