// Check whether number is even number or odd number using conditional operator
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    number % 2 == 0 ? cout << "Even" : cout << "Odd";
    return 0;
}
