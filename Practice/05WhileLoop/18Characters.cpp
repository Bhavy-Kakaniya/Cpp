// Print all uppercase and lowercase alphabets
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Uppercase letters: ";
    ch = 'A';
    while (ch <= 'Z') {
        cout << ch << " ";
        ch++;
    }
    cout << endl;

    cout << "Lowercase letters: ";
    ch = 'a';
    while (ch <= 'z') {
        cout << ch << " ";
        ch++;
    }
    cout << endl;
    return 0;
}
