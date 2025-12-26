#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << a << b << c;
    int max = (a>b)?((a>c)?a:c):(b>c)?b:c;
    cout << max;
}
