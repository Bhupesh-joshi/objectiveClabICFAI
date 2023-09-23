#include<iostream>
#include<string>

using namespace std;

int main()
{
    string num;
    cout << "Enter the number: ";
    cin >> num;
    int a, digit;
    for (int i = 0; i < num.length(); i++){
        a = num[i]- '0';
        if(a%2==0){
            digit= num[i+1]-'0';
        }
    }
    cout<<"after the last even digit: "<< digit;
    return 0;
}