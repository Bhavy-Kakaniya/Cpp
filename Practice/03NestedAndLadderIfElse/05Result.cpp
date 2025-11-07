// Read marks of five subjects. Calculate percentage and print class accordingly. Fail below 35, Pass Class between
// 36 to 45, Second Class between 46 to 60, First Class between 61 to 70, Distinction if more than 70
#include <iostream>
using namespace std;

int main()
{
    int marks, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks of subject:" << (i + 1);
        cin >> marks;
        sum = sum + marks;
    }
    float percentage = (sum * 100) / 500;
    if (percentage < 35 && percentage > 0)
        cout << "Fail";
    else if (percentage > 36 && percentage < 45)
        cout << "Pass Class";
    else if (percentage > 46 && percentage < 60)
        cout << "Second Class";
    else if (percentage > 61 && percentage < 70)
        cout << "First Class";
    else
        cout << "Distinction";
    return 0;
}
