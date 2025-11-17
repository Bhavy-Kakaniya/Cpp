// Check whether the given number is Armstrong or not
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, original, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    original = n;
    int temp = n, digits = 0;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << "Armstrong" << endl;
    else
        cout << "Not Armstrong" << endl;

    return 0;
}
