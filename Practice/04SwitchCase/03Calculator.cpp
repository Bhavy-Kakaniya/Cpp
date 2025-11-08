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

    switch (choice)
    {
    case 1:
        cout << a + b;
        break;
    case 2:
        cout << a - b;
        break;
    case 3:
        cout << a * b;
        break;
    case 4:
        cout << a / b;
        break;
    default:
        break;
    }
}
