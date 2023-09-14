#include<iostream>

int main()
{
    int number;

    std:: cout << "Enter the number: ";
    std::cin >> number;

    number /= 1000;

    std::cout << "Number with last two digits removed: " << number << std::endl;

    return 0;
}