// Get 10 numbers from user print count of odd, even numbers
#include <iostream>
using namespace std;

int main()
{
    int n, i = 0;
    while (i < 10)
    {
        cout << "Enter n: ";
        cin >> n;
        if(n % 2 == 0) cout << "Even" << endl;
        else cout << "Odd" << endl;
        i++;
    }
    return 0;
}
