#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    c = (a * a) + (b * b * b);
    cout << "Sum of square of the first and cube of the second is " << c;
}