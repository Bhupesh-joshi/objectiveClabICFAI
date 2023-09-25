#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Convert the integer to a string
    string numberStr = to_string(number);

    // Check if the string is not empty and has at least two digits
    if (!numberStr.empty() && numberStr.size() >= 2) {
        int sum = 0;

        // Iterate through the string to calculate the sum of products
        for (size_t i = 0; i < numberStr.size() - 1; ++i) {
            int digit1 = numberStr[i] - '0';
            int digit2 = numberStr[i + 1] - '0';
            int product = digit1 * digit2;
            sum += product;
        }

        // Print the sum of products
        cout << "The sum of products of consecutive digits is: " << sum << endl;
    } else {
        cout << "Invalid input. Please enter an integer with at least two digits." << endl;
    }

    return 0;
}
