#include <iostream>
using namespace std;

// function prototype
// type function-name (arguments);
// int sum (int a, int b) // correct
// int sum (int, int ) // correct
// int sum (int a, int) // correct
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;
    cout << "Enter number1: ";
    cin << num1;
    cout << "Enter number2: ";
    cin >> num2;
    cout << "Sum is " << sum(num1, num2);
    return 0;
}
