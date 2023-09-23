#include<iostream>

using namespace std;

int main()
{
    int x, d = 0, a;
    cout << "Enter the num: ";
    cin >> x;
    while (x>0)
    {
        a = x%10;
        if(a%2==0){
            d=d+1;
        }
        x=x/10;
    }
    cout<<"Second Num: "<<d;
    return 0;
}