// Calculate without using power function and without using multiplication
#include <iostream>
using namespace std;
int main()
{
    int base, exp;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;

    int result = 1;
    // Outer loop for exponent
    for (int i = 0; i < exp; i++)
    {
        int temp = 0;
        // Inner loop for multiplication
        for (int j = 0; j < base; j++)
            temp = temp + result;
        result = temp;
    }
    cout << base << "^" << exp << " = " << result << endl;
}