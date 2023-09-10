#include <iostream>

int main() {
    double a, b, c, p;

    // Read values for a, b, c, and p
    std::cout << "Enter the value of a: ";
    std::cin >> a;

    std::cout << "Enter the value of b: ";
    std::cin >> b;

    std::cout << "Enter the value of c: ";
    std::cin >> c;

    std::cout << "Enter the value of p: ";
    std::cin >> p;

    // Calculate f(p) = ap^2 + bp + c
    double result = a * p * p + b * p + c;

    // Display the result
    std::cout << "f(" << p << ") = " << result << std::endl;

    return 0;
}