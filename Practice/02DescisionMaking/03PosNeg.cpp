// Check whether given number is positive or negative
#include<iostream>

using namespace std;

int main(){
    int number;
    cout << "Enter number: ";
    if(number < 0) cout << "Negative";
    else if(number > 0) cout << "Positive";
    else cout << "0";
    return 0;
}
