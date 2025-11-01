#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int *b = &a;
    // address &
    cout << "Address of a is: " << &a << endl;
    cout << "Address of a is: " << b << endl;
    // * dereference
    cout << "Value at address b is: " << *b << endl;
    // pointer to pointer
    int **c = b;
    cout << "Value of b is " << &b << endl;
    cout << "Value of b is " << c << endl;
    cout << "Value at address c is " << c * << endl;
    cout << "Value at address value_at(value_at(c)) is: " << **c << endl;
    return 0;
}
