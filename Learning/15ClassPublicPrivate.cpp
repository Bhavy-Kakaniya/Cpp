#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "The value of a is " << a;
        cout << "The value of b is " << b;
        cout << "The value of c is " << c;
        cout << "The value of d is " << d;
        cout << "The value of e is " << e;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee e1;
    // we can access d and e like this but not a b and c because they are private we need to use function for it
    e1.d = 5;
    e1.e = 6;
    e1.setData(1, 2, 4);
    e1.getData();
    return 0;
}
