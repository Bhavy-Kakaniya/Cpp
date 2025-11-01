#include <iostream>
using namespace std;

// we can use typedef and now instead of writting emp we can write ep
typedef struct emp
{
    int eid;
    char favchar;
    float salary;
} ep;

// in union only one attribute is used
union money
{
    int rice;
    float pound;
    char car;
};

int main()
{
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };

    Meal m1 = breakfast;
    cout << m1;
    cout << breakfast;
    cout << lunch;
    cout << dinner;
    ep bhavy;
    union money m1;
    m1.rice = 34;
    cout << "Rice " << m1.rice;
    struct emp bhavy;
    bhavy.eid = 1;
    bhavy.favchar = 'p';
    bhavy.salary = 10000000000;
    cout << "Employee id: " << bhavy.eid << endl;
    cout << "Salary: " << bhavy.salary << endl;
    cout << "Favourite character: " << bhavy.favchar << endl;
    return 0;
}
