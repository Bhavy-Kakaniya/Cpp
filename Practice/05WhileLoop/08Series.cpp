// Print first 50 numbers in series 1, 4, 7, 10
#include <iostream>

using namespace std;

int main()
{
    int i = 1, a = 1;
    while (i < 50)
    {
        cout << a << " ";
        a += 3;
        i++;
    }
    return 0;
}
