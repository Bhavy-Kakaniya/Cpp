#include<iostream>
using namespace std;
int main(){
    int sec,hh,mm,ss;
    cin >> sec;
    hh = sec / 3600;
    sec = sec % 3600;
    mm = sec / 60;
    sec = sec % 60;
    ss = sec;
    cout << hh << mm << ss;
    return 0;
}
