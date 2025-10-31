// two types of header files
// 1. system header files comes with compiler
#include <iostream>
// 2. user defined header files written by programmer

using namespace std;
int c = 100;
int main()
{
    int a = 1, b = 2;

    cout << "this will print in next line" << endl;
    cout << "this will print in next line" << endl;

    cout << "This are arithmetic operators" << endl;
    cout << "value of a + b: " << a + b << endl;
    cout << "value of a - b: " << a - b << endl;
    cout << "value of a * b: " << a * b << endl;
    cout << "value of a / b: " << a / b << endl;
    cout << "value of a % b: " << a % b << endl;
    cout << "value of a++: " << a++ << endl;
    cout << "value of ++a: " << ++a << endl;
    cout << "value of a--: " << a-- << endl;
    cout << "value of --a: " << --a << endl;

    cout << "This are assignment operators" << endl;
    cout << "value of a < b: " << (a < b) << endl;
    cout << "value of a > b: " << (a > b) << endl;
    cout << "value of a == b: " << (a == b) << endl;
    cout << "value of a != b: " << (a != b) << endl;
    cout << "value of a <= b: " << (a <= b) << endl;
    cout << "value of a >= b: " << (a >= b) << endl;
    cout << "value of a >= b: " << (a >= b) << endl;

    cout << "This are logical operators" << endl;
    cout << "value of ((a == b) && (a < b)): " << ((a == b) && (a < b)) << endl;
    cout << "value of ((a == b) || (a < b)): " << ((a == b) || (a < b)) << endl;
    cout << "value of (!(a==b)): " << (!(a == b)) << endl;

    cout << "This is assignment" << endl;
    int c;
    c = a + b;
    cout << "This is local scoped c = a + b: " << c;
    cout << "This is global scoped c = a + b: " << ::c;

    float d = 34.4l;
    long double e = 34.4;
    cout << "value of d is " << d << endl
         << "value of e is " << e;
    // referencing
    int x = 45;
    int &y = x;
    cout << x << endl
         << y;
    // type casting
    float z = 10.10;
    cout << "value of x is " << (float)x;
    cout << "value of x is " << float(x);
    cout << "value of z is " << (int)z;
    return 0;
}
