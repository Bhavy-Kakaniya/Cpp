#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 10 && n > -10)
    {
        cout << "Number has only one digit. Swapping has no effect: " << n << endl;
        return 0;
    }

    bool isNegative = false;
    if (n < 0)
    {
        isNegative = true;
        n = -n;
    }

    int lastDigit = n % 10, temp = n, digits = 0;
    while (temp > 0)
    {
        temp /= 10;
        digits++;
    }

    int firstDigit = n / pow(10, digits - 1), middle = n % (int)pow(10, digits - 1);
    middle /= 10;

    int swapped = lastDigit * pow(10, digits - 1) + middle * 10 + firstDigit;

    if (isNegative)
        swapped = -swapped;

    cout << "Number after swapping first and last digit: " << swapped << endl;
    return 0;
}