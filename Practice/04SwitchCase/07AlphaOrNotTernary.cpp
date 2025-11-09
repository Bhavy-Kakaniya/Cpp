// Check whether character is an alphabet or not using conditional operator
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter Character: ";
    cin >> ch;
    ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? cout << "Alphabet" : cout << "Not alphabet";
    return 0;
}
