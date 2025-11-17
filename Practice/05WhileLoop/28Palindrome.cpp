// Palindrome
#include <iostream>
using namespace std;

int main()
{
    int n, original, reversed = 0;
    cout << "Enter a number: ";
    cin >> n;
    original = n;

    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (reversed == original)
    {
        cout << original << " is a palindrome number." << endl;
    }
    else
    {
        cout << original << " is not a palindrome number." << endl;
    }

    return 0;
}
