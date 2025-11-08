// Find out largest number from given 3 numbers using conditional operator
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    cout << "max : " << max;
    return 0;
}
