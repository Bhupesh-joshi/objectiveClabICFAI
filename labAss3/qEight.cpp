#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Find the different number using XOR (^) operation
    int differentNumber = num1 ^ num2 ^ num3;

    cout << "The different number is: " << differentNumber << endl;

    return 0;
}
