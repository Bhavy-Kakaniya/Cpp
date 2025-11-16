// Print digits of given number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int temp = n, divisor = 1;

    while (temp / 10 > 0) {
        divisor *= 10;
        temp /= 10;
    }
    cout << "Digits: ";
    while (divisor > 0) {
        int digit = n / divisor;
        cout << digit << " ";
        n = n % divisor;
        divisor /= 10;
    }

    cout << endl;
    return 0;
}
