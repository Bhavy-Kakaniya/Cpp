#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n == 0)
    {
        cout << "0 occurs 1 time" << endl;
        return 0;
    }

    cout << "Digit frequencies:" << endl;
    for (int d = 0; d <= 9; d++)
    {
        int count = 0, temp = n;

        while (temp > 0)
        {
            if (temp % 10 == d)
                count++;

            temp /= 10;
        }

        if (count > 0)
            cout << d << " occurs " << count << " times" << endl;
    }
    return 0;
}