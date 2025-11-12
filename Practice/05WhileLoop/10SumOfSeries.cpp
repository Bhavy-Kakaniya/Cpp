// Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + … + n
#include <iostream>
using namespace std;

int main()
{
    int i = 1, n, sum = 0;
    cout << "Enter number of is: ";
    cin >> n;
    while (i <= n)
    {
        sum += i * i;
        i++;
    }
    cout << "Sum is " << sum;
    return 0;
}
