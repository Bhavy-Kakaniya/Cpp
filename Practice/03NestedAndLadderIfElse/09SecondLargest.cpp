// Find the second largest number among three user input numbers
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            if (b > c)
                cout << "B is second largest";
            else
                cout << "C is second largest";
        }
        else
            cout << "A is second largest";
    }
    else if (b > a)
    {
        if (b > c)
        {
            if (a > c)
                cout << "A is second largest";
            else
                cout << "C is second largest";
        }
        else
            cout << "B is second largest";
    }
    return 0;
}
