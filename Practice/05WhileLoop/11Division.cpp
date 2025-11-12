#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // larger number divided by smaller
    int dividend = (num1 > num2) ? num1 : num2;
    int divisor = (num1 > num2) ? num2 : num1;

    int quotient = 0;
    int remainder = dividend;
    
    // Repeated Subtract for quotient
    while (remainder >= divisor) {
        remainder -= divisor;
        quotient++;
    }

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl;

    return 0;
}
