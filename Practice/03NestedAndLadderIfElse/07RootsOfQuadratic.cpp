// Determine the roots of the equation ax2+bx+c=0
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter coefficient of x^2, x, and constant: ";
    cin >> a >> b >> c;
    int root1 = (-b + ((b*b) - (4 * a * c))) / (2 * a);
    int root2 = (-b - ((b*b) - (4 * a * c))) / (2 * a);
    cout << "Roots: " << root1 << " " << root2;
    return 0;
}
