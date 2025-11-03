#include <iostream>
using namespace std;

int main()
{
    float principal, rate, time;
    cout << "Enter principal: ";
    cin >> principal >> rate >> time;
    cout << "The Simple Interest is: " << (principal * rate * time) / 100;
    return 0;
}
