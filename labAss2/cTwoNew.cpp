#include<iostream>

using namespace std;

int main()
{
    int num, k;
    cout<<"Enter the number: ";
    cin>> num;
    cout<<"digits from the last: ";
    cin>> k;
    for(int i =1; i<k; i++)
    {
        num = num/10;
    }
    num = num%10;
    cout<<"the kth digit from the last: "<<num<<endl;

    return 0;
}