#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main() {
    int a, b, c;

    // Input coefficients a, b, and c
    cout << "Enter the coefficient a: ";
    cin >> a;
    cout << "Enter the coefficient b: ";
    cin >> b;
    cout << "Enter the coefficient c: ";
    cin >> c;

    // Calculate the discriminant (D)
    int D = b * b - 4 * a * c;

    // Calculate the roots using complex numbers
    complex<int> root1, root2;

    if (D >= 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
    } else {
        int realPart = -b / (2 * a);
        int imaginaryPart = sqrt(-D) / (2 * a);
        root1 = complex<int>(realPart, imaginaryPart);
        root2 = complex<int>(realPart, -imaginaryPart);
    }

    // Print the roots
    cout << "Root 1: " << root1 << endl;
    cout << "Root 2: " << root2 << endl;

    return 0;
}
