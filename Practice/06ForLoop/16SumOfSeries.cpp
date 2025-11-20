// Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + …+ (1+2+3+4+…. +n)
#include <iostream>

using namespace std;

int main()
{
    int terms, sum = 0;
    cout << "enter number of terms: ";
    cin >> terms;
    for (int i = 1; i <= terms; ++i)
    {
        for (int j = 1; j < i; ++j)
            sum += j;
        sum += i;
    }
    cout << "Sum is " << sum;
    return 0;
}