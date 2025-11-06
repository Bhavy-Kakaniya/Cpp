// Check whether the entered character is upper case, lower case, digit or any special character
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter character to check its type: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
        cout << "Lower Case";
    else if (ch >= 'A' && ch <= 'Z')
        cout << "Upper Case";
    else if (ch >= '0' && ch <= '9')
        cout << "Digit";
    else
        cout << "Symbol";
    return 0;
}
