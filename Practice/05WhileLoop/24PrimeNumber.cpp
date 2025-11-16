// Find whether the given number is prime or not
#include <iostream>
using namespace std;

int main()
{
    int n, i = 2, count = 0;
    cout << "Enter n: ";
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not prime";
            count++;
            return 0;
        }
        i++;
    }
    cout << "Prime";
    return 0;
}
