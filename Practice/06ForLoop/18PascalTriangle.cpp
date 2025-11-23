#include <iostream>
using namespace std;

// calculate factorial
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        // Print spaces
        for (int space = 0; space < rows - i - 1; space++)
            cout << " ";

        // Print each value in row
        for (int j = 0; j <= i; j++)
        {
            int value = factorial(i) / (factorial(j) * factorial(i - j));
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}