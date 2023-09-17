#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;

    cout << "Enter the number";
    cin >> a;
    b = a % 1000;
    e = a % 100;
    e = e / 10;
    c = b % 10;
    d = b / 100;
    a = a/ 1000;
    a = (a * 1000) + (c * 100) + (e * 10) + d;
    cout << "The required num is " << a << std::endl;
    
    return 0;
}
