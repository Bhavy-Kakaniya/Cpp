// Check whether given character is vowel or consonant
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter character to check vowel or consonant: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << "vowel";
    else
        cout << "consonant";
}
