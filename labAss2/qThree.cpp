#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;

    // Convert the integer to a string
    string numberStr = to_string(number);

    // Check if the string is not empty
    if (!numberStr.empty()) {
        // Extract the first character (which is the first digit)
        char firstDigit = numberStr[0];

        // Print the first digit
        cout << "The first digit is: " << firstDigit << endl;
    } else {
        std::cout << "Invalid input. Please enter a non-empty integer." << endl;
    }

    return 0;
}