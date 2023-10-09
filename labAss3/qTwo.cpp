#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, num4;

    // Input four numbers
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    // Find the maximum among the four numbers using nested std::max calls
    int largest = max(num1, max(num2, max(num3, num4)));

    cout << "The largest number is: " << largest << endl;

    return 0;
}
