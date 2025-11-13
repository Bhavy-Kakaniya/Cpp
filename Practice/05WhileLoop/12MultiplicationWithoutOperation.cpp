// Take two numbers input from user and perform a multiplication without using a * operator
#include <iostream>
using namespace std;

int main()
{
    int a, b, i = 0, ans = 0;
    cout << "Enter a, b: ";
    cin >> a >> b;
    while (i < b)
    {
        ans += a;
        i++;
    }
    cout << ans;
    return 0;
}
