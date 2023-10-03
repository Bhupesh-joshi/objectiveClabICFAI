#include<iostream>

using namespace std;

int main () {
    int n;
    cout << "Enter N : ";
    cin >> n;

    int i = 2;

    while(i<n){
        // dividing, not prime
        if(n%i == 0){
            cout << "not prime" << endl;
        } else {
            cout << "Prime for" << i << endl;
        }

        i = i + 1;
    }

}