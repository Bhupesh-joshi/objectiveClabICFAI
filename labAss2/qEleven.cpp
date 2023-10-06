#include <iostream>

using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    int evenCount = 0;

    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            evenCount++;
        }
        num /= 10;
    }

    cout << "Number of even digits: " << evenCount << endl;

    return 0;
}
