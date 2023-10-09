#include <iostream>

using namespace std;

int main() {
    double num1, num2;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Swap the numbers if the second number is larger
    if (num2 > num1) {
        swap(num1, num2);
    }

    // Print both numbers, with the largest number first
    cout << "The largest number is: " << num1;
    cout << "The second number is: " << num2 << endl;

    return 0;
}
