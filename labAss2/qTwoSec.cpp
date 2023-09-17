#include <iostream>
#include <string>

int main() {
    std::string input;
    int k;

    // Input the number as a string to preserve leading zeros, if any
    std::cout << "Enter a number: ";
    std::cin >> input;

    std::cout << "Enter the position of the digit to delete from the end (k): ";
    std::cin >> k;

    // Check if k is valid using a ternary operator
    bool isValid = (k >= 1 && k <= input.length());
    
    // Erase the kth digit from the end if valid, otherwise, do nothing
    isValid ? input.erase(input.length() - k, 1) : void();

    // Convert the modified string back to an integer (if needed)
    // int result = std::stoi(input);

    // Print the result
    std::cout << "Result after deleting the " << k << "th digit from the end: " << input << std::endl;

    return 0;
}
