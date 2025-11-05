// Find out largest number from given three numbers
#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2, c = 3;
    if (a > b)
    {
        if (a > c)
            cout << "A is max";
        else
            cout << "C is max";
    }
    else
    {
        if (b > c)
            cout << "B is max";
        else
            cout << "C is max";
    }
}
