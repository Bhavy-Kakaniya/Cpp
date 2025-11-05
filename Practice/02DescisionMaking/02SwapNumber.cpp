// Swap two numbers (Using temporary variable and without using temporary variable)
#include<iostream>

using namespace std;

int main(){
    int a = 1, b = 2, temp;
    // with temp variable
    cout << "Before: " << a << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After: a = " << a << "b = " << b << endl;
    // without temp variable
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After: a = " << a << "b = " << b << endl;
}
