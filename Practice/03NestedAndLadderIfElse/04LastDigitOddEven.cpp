// Input an integer number and check the last digit of number is even or odd
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    int lastDigit = number % 10;
    if (lastDigit % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
    return 0;
}
