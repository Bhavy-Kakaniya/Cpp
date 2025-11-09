// Print numbers between two given numbers which is divisible by 2
#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cout << "Enter Starting: ";
    cin >> start;
    cout << "Enter End: ";
    cin >> end;
    while (start < end)
    {
        if (start % 2 == 0)
        {
            cout << start << " ";
        }
        start++;
    }

    return 0;
}
