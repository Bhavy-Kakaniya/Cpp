// Print odd numbers between 1 to n
#include <iostream>
using namespace std;

int main()
{
    int n, i = 0;
    cout << "Enter number: ";
    cin >> n;
    while (i < n)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
        i++;
    }
    return 0;
}
