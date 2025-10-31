#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // constants
    int b = 4;
    b = 5;
    const int a = 10;
    // a = 3; error const variable cannot be changed
    // manipulators
    int x = 1, y = 22, z = 333;
    cout << "Without set up "
         << x << endl
         << y << endl
         << z << endl;
    cout << "value of x is: " << setw(4) << x << endl;
    cout << "value of y is: " << setw(4) << y << endl;
    cout << "value of z is: " << setw(4) << z << endl;
    return 0;
}
