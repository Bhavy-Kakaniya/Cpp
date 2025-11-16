#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Reversed number: ";
    while (n > 0) {
        int digit = n % 10;
        cout << digit;
        n /= 10;
    }

    return 0;
}
