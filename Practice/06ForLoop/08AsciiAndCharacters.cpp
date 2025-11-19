// Print all ASCII character with their values
#include <iostream>
using namespace std;

int main()
{
    cout << "ASCII and values:" << endl;
    for (int i = 0; i <= 127; i++)
        cout << i << " : " << char(i) << endl;

    return 0;
}