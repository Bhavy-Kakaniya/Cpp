#include <iostream>
using namespace std;

// Call by reference
void swapByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by value
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    swap(&a, &b);
    cout << "a is " << a << "b is " << b;
    return 0;
}
