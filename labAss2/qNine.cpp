#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a, d;
    cout << "Enter the num: ";
    cin >> a;
    int sum = 0;
    while (a>0)
    {
        d = a%10;
        if(d%2==0){
            sum=sum+d;
            }
            a=a/10;
    }
    cout<< "sum of even digits: " << sum;
    return 0;
}