// Find out sum of first and last digit of a given number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int lastDigit = n % 10, firstDigit = n;
    while (firstDigit >= 10) firstDigit /= 10;
    cout << "Sum of first and last digit = " << firstDigit + lastDigit << endl;

    return 0;
}
