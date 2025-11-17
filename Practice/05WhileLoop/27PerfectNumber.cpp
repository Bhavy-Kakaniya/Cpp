// Check whether the given number is perfect or not
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0, i = 1;
    while (i <= n / 2)
    {
        if (n % i == 0)
            sum += i;
        i++;
    }

    if (sum == n)
        cout << n << " is a perfect number." << endl;
    else
        cout << n << " is not a perfect number." << endl;

    return 0;
}
