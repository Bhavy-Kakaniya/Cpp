// Three sides of a triangle are entered through the keyboard, WAP to check whether the triangle is isosceles,
// equilateral, scalene or right angled triangle
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter side1, side2, side3: ";
    cin >> a >> b >> c;
    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
        cout << "Right Angled";
    else if ((a != b) && (b != c) && (c != a))
        cout << "Scalene";
    else if ((a == b) && (b == c))
        cout << "Equilateral";
    else if (((a == b) && (a != c)) || ((b == c) && (b != a)) || ((c == a) && (c != b)))
        cout << "Isosceles";
    return 0;
}
