#include <iostream>
using namespace std;

int main()
{
    int second, ss, mm, hh;
    cout << "Enter seconds to convert to HH:MM:SS format: ";
    cin >> second;
    hh = second / 3600;
    mm = (second % 3600) / 60;
    ss = second % 60;
    cout << hh << ":" << mm << ":" << ss;
    return 0;
}
