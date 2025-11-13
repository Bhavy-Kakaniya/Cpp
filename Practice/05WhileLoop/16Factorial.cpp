// Factorial
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, factorial = 1;
    cout << "Enter a number: ";
    cin >> n;

    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    cout << "Factorial of " << n << " = " << factorial << endl;
    return 0;
}
