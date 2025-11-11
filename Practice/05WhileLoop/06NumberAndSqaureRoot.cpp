// Print number and its square root for 0 to 9
#include <iostream>
using namespace std;

int main()
{
    int n, i = 0;
    cout << "Enter n: ";
    cin >> n;
    while (i < n)
    {
        cout << i << " = " << i*i << endl;
        i++;
    }
    return 0;
}
