// Print sum of 1 to n numbers
#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, i = 0;
    cout << "Enter n: ";
    cin >> n;
    while(i < n) {
        sum += i;
    }
    cout << "sum is " << sum;
    return 0;
}
