#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

float sum(float a, int b)
{
    return a + b;
}
int main()
{
    int a = 1.1, b = 2, c = 3;
    cout << "Sum of 1 and 2 is " << sum(a, b);
    cout << "Sum of 1 and 2 is " << sum(a, b);
    cout << "Sum of 1 and 2 and 3 is " << sum(a, b, c);
    return 0;
}
