#include <iostream>

int main() {
    int number;
    
    // Input the number
    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number >= 100) {
        // Extract the last digit
        int lastDigit = number % 10;
        
        // Extract the third last digit
        int temp = number / 100;  // Remove the last two digits
        int thirdLastDigit = temp % 10;

        // Replace the last digit with the third last digit
        number = (number / 10) * 10 + thirdLastDigit;

        // Replace the third last digit with the last digit
        int power = 1;
        for (int i = 0; i < 2; ++i) {
            power *= 10;
        }
        number = number - thirdLastDigit * power + lastDigit * power;

        // Output the result
        std::cout << "Result: " << number << std::endl;
    } else {
        std::cout << "The number must have at least 3 digits." << std::endl;
    }

    return 0;
}