#include<iostream>

using namespace std;

int main (){
    int a, b;

    cout << "enter a";
    cin >> a;

    // if(a>0) {
    //     cout << "A is positive ";
    // } else {
    //     if(a<0){
    //         cout << "A is negative ";
    //     }else {
    //         cout << "A is 0";
    //     }
    // }

    if(a>0) {
        cout << "A is positive ";
    } else if(a<0) {
        cout << "A is negative ";
    } else {
        cout << "A is 0";
    }
    
}