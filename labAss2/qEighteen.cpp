#include <iostream>
#include <string>

int main() {
    long long int number; // Input number
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::string numStr = std::to_string(number); // Convert number to a string
    int sum = 0;

    for (int i = 0; i < numStr.length(); i++) {
        int currentDigit = numStr[i] - '0';

        // Check if there is a next digit to form a consecutive number
        if (i < numStr.length() - 1) {
            int nextDigit = numStr[i + 1] - '0';
            int consecutiveNumber = currentDigit * 10 + nextDigit;
            sum += consecutiveNumber;
        }
    }

    std::cout << "The sum of numbers formed by consecutive digits is: " << sum << std::endl;

    return 0;
}
