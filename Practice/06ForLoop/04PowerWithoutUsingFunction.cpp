// Power using *
#include <iostream>
using namespace std;

int main()
{
    int base, result = 1, exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    int exp = (exponent < 0) ? -exponent : exponent;
    for (int i = 1; i <= exp; i++)
        result *= base;
    if (exponent < 0)
        result = 1 / result;
    cout << base << " ^ " << exponent << " = " << result << endl;

    return 0;
}
