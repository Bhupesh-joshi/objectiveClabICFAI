#include <iostream>

int main() {
    int a, b, c, d, x;

    // Read 5 distinct numbers
    std::cout << "Enter five distinct numbers (a, b, c, d): ";
    std::cin >> a >> b >> c >> d;

    // Read the extra number
    std::cout << "Enter an extra number (x): ";
    std::cin >> x;

    // Check which number matches x and output it
    if (x == a) {
        std::cout << "x is equal to a: " << a << std::endl;
    } else if (x == b) {
        std::cout << "x is equal to b: " << b << std::endl;
    } else if (x == c) {
        std::cout << "x is equal to c: " << c << std::endl;
    } else if (x == d) {
        std::cout << "x is equal to d: " << d << std::endl;
    } else {
        std::cout << "x is not equal to any of the numbers a, b, c, or d." << std::endl;
    }

    return 0;
}
