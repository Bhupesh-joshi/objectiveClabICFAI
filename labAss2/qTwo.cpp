#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int k;

    // Input the number as a string to preserve leading zeros, if any
    cout << "Enter a number: ";
    cin >> input;

    cout << "Enter the position of the digit to delete from the end (k): ";
    cin >> k;

    // Check if k is valid
    if (k >= 1 && k <= input.length()) {
        // Erase the kth digit from the end
        input.erase(input.length() - k, 1);

        // Convert the modified string back to an integer (if needed)
        // int result = std::stoi(input);

        // Print the result
        cout << "Result after deleting the " << k << "th digit from the end: " << input << endl;
    } else {
        cout << "Invalid value of k. It should be between 1 and the length of the input number." << endl;
    }

    return 0;
}