// Check for equality of two numbers without using arithmetic or comparison operator
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if ((a ^ b)) // non-zero means not equal
        cout << "Numbers are not equal";
    else
        cout << "Numbers are equal";
    return 0;
}
