// Print 1 to n using while
#include <iostream>
using namespace std;

int main()
{
    int n, i = 0;
    cout << "Enter n: ";
    cin >> n;
    while(i < n) {
        cout << i << ", ";
        i++;
    }
    return 0;
}
