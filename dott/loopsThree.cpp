#include<iostream>

using namespace std;

int main () {
    int a;
    cout << "Enter a : ";
    cin >> a;

    int i = 2;
    int sum = 0;

    while(i/a) {
        sum = sum + a;
        i = i + 2;
    }

    cout << sum << endl;

}