#include <iostream>

int main()
{
    int number;

    std::cout <<"enter the number: ";
    std::cin >> number;

    number = number / 10;

    std::cout << "Number with last digit removed: " << number << std::endl;

    return 0;
}