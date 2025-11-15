// Get a decimal number from user and convert it into roman digits. (Symbol: I:1, IV:4, V:5, IX:9, X:10, XL:40, L:50,
// XC:90, C:100, CD:400, D:500, CM:900, M:1000)
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    while (n > 0)
    {
        if (n >= 1000)
        {
            cout << "M";
            n -= 1000;
        }
        else if (n >= 900)
        {
            cout << "CM";
            n -= 900;
        }
        else if (n >= 500)
        {
            cout << "D";
            n -= 500;
        }
        else if (n >= 400)
        {
            cout << "CD";
            n -= 400;
        }
        else if (n >= 100)
        {
            cout << "C";
            n -= 100;
        }
        else if (n >= 90)
        {
            cout << "XC";
            n -= 90;
        }
        else if (n >= 50)
        {
            cout << "L";
            n -= 50;
        }
        else if (n >= 40)
        {
            cout << "XL";
            n -= 40;
        }
        else if (n >= 10)
        {
            cout << "X";
            n -= 10;
        }
        else if (n >= 9)
        {
            cout << "IX";
            n -= 9;
        }
        else if (n >= 5)
        {
            cout << "V";
            n -= 5;
        }
        else if (n >= 4)
        {
            cout << "IV";
            n -= 4;
        }
        else if (n >= 1)
        {
            cout << "I";
            n -= 1;
        }
    }
    cout << endl;
    return 0;
}
