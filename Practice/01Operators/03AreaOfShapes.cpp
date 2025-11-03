#include <iostream>
using namespace std;
int main()
{
    // Rectangle
    cout << "Calculating Area Of Rectagle: " << endl;
    int heightOfRec, widthOfRec;
    cout << "Enter height and width: ";
    cin >> heightOfRec >> widthOfRec;
    cout << "Area of Rectangle is: " << heightOfRec * widthOfRec << endl;

    // Triangle
    cout << "Calculating Area Of Triangle: " << endl;
    float heightOfTri, widthOfTri;
    cout << "Enter height and width: ";
    cin >> heightOfTri >> widthOfTri;
    cout << "Area of Triangle is: " << 0.5 * heightOfTri * widthOfTri << endl;

    // Circle
    cout << "Calculating Area Of Circle: " << endl;
    float radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area of Circle is: " << 3.141 * radius * radius;

    return 0;
}
