// Convert given number in words. (i.e. n=3456  output: Three Four Five Six)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0)
    {
        cout << "Zero" << endl;
        return 0;
    }

    int temp = n, reversed = 0;

    while (temp > 0)
    {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    cout << "Number in words: ";
    while (reversed > 0)
    {
        int digit = reversed % 10;

        switch (digit)
        {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
        reversed /= 10;
    }

    cout << endl;
    return 0;
}
