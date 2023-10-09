#include <iostream>
#include <cmath>

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

    if (D > 0) {
        // Real and distinct roots
        int root1 = (-b + sqrt(D)) / (2 * a);
        int root2 = (-b - sqrt(D)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (D == 0) {
        // Real and equal roots
        int root = -b / (2 * a);
        cout << "Root: " << root << endl;
    } else {
        // Imaginary roots
        int realPart = -b / (2 * a);
        int complexPart = sqrt(-D) / (2 * a);
        cout << "Root 1: " << realPart << " + " << complexPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << complexPart << "i" << endl;
    }

    return 0;
}
