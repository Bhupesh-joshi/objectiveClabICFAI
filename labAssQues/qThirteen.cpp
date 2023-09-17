#include<iostream>

using namespace std;

int main ()
{
    int a, b, c, d, rev_pro;
    cout << "Enter the first num";
    cin >> b;
    c = a % 10;
    d = b % 10;
    a = a / 10;
    b = b / 10;
    a = (a + 10) + d;
    b = (b + 10) + c;
}
