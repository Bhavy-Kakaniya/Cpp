// HCF LCM
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int hcf = a, lcm = (num1 * num2) / hcf;

    cout << "HCF of " << num1 << " and " << num2 << " = " << hcf << endl;
    cout << "LCM of " << num1 << " and " << num2 << " = " << lcm << endl;

    return 0;
}
