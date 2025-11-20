#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            a++;
            cout << a << " ";
        }
        cout << endl;
    }
    return 0;
}