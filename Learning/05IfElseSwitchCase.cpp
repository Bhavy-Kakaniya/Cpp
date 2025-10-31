#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter age: ";
    cin >> age;
    if (age < 18)
    {
        cout << "you cannot drive";
    }
    else if (age == 18)
    {
        cout << "you can drive but be careful";
    }
    else
    {
        cout << "you can drive";
    }

    int choice;
    cout << endl<< "enter choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "pani puri";
        break;
    case 2:
        cout << "paubhaji";
        break;
    case 3:
        cout << "pizza";
        break;
    default:
        break;
    }
}  
