#include <iostream>
using namespace std;

// makes function inline which is useful when called multiple times
inline int product(int a, int b)
{
    return a * b;
}

int sum(int a, int b)
{
    // static will be executed only once
    static int c = 0; // c will be stored now if function will called second time value of c will be 1
    c = c + 1;
    return a + b + c;
}

// dont use static in inline function

// const will not allow value to change
// int strlen(const char *p) {}

int main()
{
    int a = 3, b = 4;
    cout << "Product is " << product(a, b);
    cout << "Product is " << product(a, b);
    cout << "Product is " << product(a, b);
    cout << "Product is " << product(a, b);
    cout << "Product is " << product(a, b);
    return 0;
}
