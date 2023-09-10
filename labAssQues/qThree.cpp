#include<iostream>

using namespace std;

int main() 
{
    int a, b, c, d;
    cout <<"Enter the first number";
    cin >> a;
    cout <<"Enter the second number";
    cin >> b;
    c = a % 10;
    d = b % 10;
    a = a % 10;
    b = b % 10;
    a = (a+10)+d;
    b = (b+10)+c;
}