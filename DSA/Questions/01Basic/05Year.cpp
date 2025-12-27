#include <iostream>
using namespace std;
int main() {
    int days,year,week,day;
    cin >> days;
    year = days / 365;
    days = days % 365;
    week = days / 52;
    days = days % 7;
    day = days;
    cout << year << week << day;
}
