#include <iostream>
using namespace std;

int main()
{
    int days, yy, ww, dd;
    cout << "enter number of days: ";
    cin >> days;
    yy = days / 365;
    ww = (days % 365) / 7;
    dd = (days % 365) % 7;
    cout << yy << " year(s), " << ww << " week(s), " << dd << " day(s)";
    return 0;
}
