// Odd even without modulo operator
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num & 1)
        cout << "Odd";
    else
        cout << "Even";

    return 0;
}
