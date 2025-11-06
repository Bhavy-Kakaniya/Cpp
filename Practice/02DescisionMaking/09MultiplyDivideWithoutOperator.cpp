// addition multiplication without operator
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int multiply = num << 1; // multiply by 2
    cout << "After multiplying by 2: " << multiply << endl;

    int divide = num >> 1; // multiply by 2
    cout << "After dividing by 2: " << divide;
}
