#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter the number: ";
    cin >> a;
    b = a % 100;
    b = b / 10;
    b = b * 2;
    c = a % 10;
    a = a / 100;
    a = (a * 100) + (b * 10) + c;

    cout << "double the second last digit is: " << a << endl;

    return a;
}