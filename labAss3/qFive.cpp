#include <iostream>

using namespace std;

int main() {
    double a, b, c;

    // Input coefficients a, b, and c
    cout << "Enter the coefficient a: ";
    cin >> a;
    cout << "Enter the coefficient b: ";
    cin >> b;
    cout << "Enter the coefficient c: ";
    cin >> c;

    // Calculate the slope
    double slope;
    if (b != 0) {
        slope = -a / b; // Calculate the negative ratio of a and b
        cout << "The slope of the line is: " << slope << endl;
    } else {
        cout << "The line is vertical, and it does not have a defined slope." << endl;
    }

    return 0;
}
