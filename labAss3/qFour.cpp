#include <iostream>

using namespace std;

int main() {
    double a, b, c;

    // Input the sides of the triangle
    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;
    cout << "Enter the length of side c (the hypotenuse): ";
    cin >> c;

    // Check if angle A is a right angle
    if (c * c == a * a + b * b) {
        cout << "Angle A is a right angle (90 degrees)." << endl;
    } else {
        cout << "Angle A is not a right angle." << endl;
    }

    return 0;
}