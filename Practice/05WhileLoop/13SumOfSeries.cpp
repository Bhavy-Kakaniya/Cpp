#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, i = 1;
    cout << "Enter n: ";
    cin >> n;

    // Method 1: Simple loop
    while (i <= n)
    {
        if (i % 2 == 0)
            sum -= i;
        else
            sum += i;
        i++;
    }
    cout << "Sum of series = " << sum << endl;

    // Method 2: Direct formula
    int result;
    if (n % 2 == 0)
        result = -n / 2;
    else
        result = (n + 1) / 2;
    cout << "Sum using formula = " << result << endl;
    return 0;
}
