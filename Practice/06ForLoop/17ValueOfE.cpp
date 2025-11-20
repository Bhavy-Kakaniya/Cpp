// Estimate the value of the mathematical constant e. (Formula: e=1+1/1!+1/2!+1/3!+1/4!…)
#include <iostream>
using namespace std;

int main() {
    double sum = 1.0;
    for (int i = 1; i <= 10; ++i) {
        double factorial = 1.0;
        for (int j = 1; j <= i; ++j) {
            factorial = factorial * j;
        }
        sum = sum + (1.0 / factorial);
    }

    cout << "Estimated value of e = " << sum << endl;
    return 0;
}