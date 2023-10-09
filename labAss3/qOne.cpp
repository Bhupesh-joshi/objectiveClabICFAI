#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int num1, num2, num3;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Find the maximum among the three numbers
    int largest = max(num1, max(num2, num3));

    cout << "The largest number is: " << largest << endl;

    return 0;
}
