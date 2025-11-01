#include <iostream>
using namespace std;

int main()
{
    // for loop
    cout << "for: ";
    for (int i = 0; i < 10; i++)
    {
        cout << i << ", ";
    }

    // while loop
    cout << endl
         << "while: ";
    int j = 0;
    while (j < 10)
    {
        cout << j << ", ";
        j++;
    }

    // do while loop
    cout << endl
         << "do while: ";
    int k = 0;
    do
    {
        cout << k << ", ";
        k++;
    } while (k < 10);

    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
            continue;
        if (i == 4)
            break;
    }
}
