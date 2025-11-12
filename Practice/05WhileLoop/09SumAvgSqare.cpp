// Calculate sum and average of the square of first 10 integers whose square has last digit 9
#include <iostream>
using namespace std;

int main()
{
    int i = 0, n = 1, sum = 0;
    while (i < 10)
    {
        if ((n * n) % 10 == 9)
        {
            sum += n;
            i++;
        }
        n++;
    }
    cout << "sum is " << sum;
    cout << "avg is " << sum / 10;
    return 0;
}
