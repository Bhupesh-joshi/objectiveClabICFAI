#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int k;


    // Input the number as a string to preserve leading zeros, if any
    cout << "Enter a number: ";
    cin >> input;

    cout << "Enter the number of digits to delete (k): ";
    cin >> k;

    // Check if k is valid
    if (k >= 0 && k <= input.length()) {
        // Erase the last k characters from the input string
        input.erase(input.length() - k);

        // Convert the modified string back to an integer (if needed)
        // int result = std::stoi(input);

        // Print the result
        cout << "Result after deleting " << k << " digits: " << input << std::endl;
    } 
    else {
        cout << "Invalid value of k. It should be between 0 and the length of the input number." << std::endl;
    }

    return 0;
}