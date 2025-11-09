// Read 3 numbers, multiply largest number from first two numbers to third one using conditional
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    (a > b) ? (cout << a * c) : (cout << b * c);
    return 0;
}
