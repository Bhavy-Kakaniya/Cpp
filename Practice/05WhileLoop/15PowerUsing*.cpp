// Power using *
#include <iostream>
using namespace std;

int main()
{
    double base, result = 1;
    int exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    int exp = (exponent < 0) ? -exponent : exponent, i = 1;
    while (i <= exp)
    {
        result *= base;
        i++;
    }
    if (exponent < 0)
        result = 1 / result;

    cout << base << " ^ " << exponent << " = " << result << endl;

    return 0;
}
