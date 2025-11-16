// Decimal to Binary
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    if (n == 0)
    {
        cout << "Binary: 0" << endl;
        return 0;
    }

    int temp = n, divisor = 1;
    while (divisor <= temp / 2)
        divisor *= 2;

    cout << "Binary: ";
    while (divisor > 0)
    {
        if (temp >= divisor)
        {
            cout << "1";
            temp -= divisor;
        }
        else
            cout << "0";
        divisor /= 2;
    }

    cout << endl;
    return 0;
}
