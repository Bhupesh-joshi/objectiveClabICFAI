#include <iostream>

using namespace std;

int main() {
    long long num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int sum = 0;

    while (num1 > 0 && num2 > 0) {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;
        
        sum += digit1 * digit2;

        num1 /= 10;
        num2 /= 10;
    }

    cout << "Sum of products of corresponding digits: " << sum << endl;

    return 0;
}
