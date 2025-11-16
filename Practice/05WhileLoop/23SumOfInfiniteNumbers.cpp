// Find the sum and average of different numbers which are accepted by user as many as user wants
#include <iostream>
using namespace std;

int main()
{
    double num, sum = 0;
    int count = 0;
    cout << "Enter numbers and -1 to stop:" << endl;
    while (true)
    {
        cout << "Enter a number: ";
        cin >> num;
        if (num == -1)
            break;
        sum += num;
        count++;
    }

    if (count == 0)
        cout << "No numbers entered." << endl;
    else
    {
        double average = sum / count;
        cout << "Sum = " << sum << endl;
        cout << "Average = " << average << endl;
    }

    return 0;
}
