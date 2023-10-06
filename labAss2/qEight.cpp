#include <iostream>

using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    int position = 1;

    cout << "Positional values: ";
    while (num > 0) {
        int digit = num % 10;
        int positionalValue = digit * position;
        if (positionalValue != 0) {
            cout << positionalValue;
            if (num >= 10) {
                cout << ", ";
            }
        }
        num /= 10;
        position *= 10;
    }

    cout << endl;

    return 0;
}
