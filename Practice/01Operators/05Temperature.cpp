#include <iostream>
using namespace std;

int main()
{
    float fahrenheit, celsius;
    cout << "Enter fahrenheit to convert in celsius: ";
    cin >> fahrenheit;
    cout << "Celsius is: " << ((fahrenheit - 32) * 5) / 9 << endl;
    
    cout << "Enter celsius to convert in fahrenheit: ";
    cin >> celsius;
    cout << "Fahrenheit is: " << ((9 * celsius) / 5) + 32;
    return 0;
}
