// Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice
#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "enter choice: ";
    cin >> choice;
    int a, b;
    cout << "enter a and b: ";
    cin >> a >> b;

    if (choice == 1)
        cout << a + b;
    else if (choice == 2)
        cout << a - b;
    else if (choice == 3)
        cout << a * b;
    else if (choice == 4)
        cout << a / b;
}
